#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<pair<int, int>> shift;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'S')
            {
                shift.push_back({i, j});
            }
        }
    }

    vector<double> ch(27, 105);
    vector<bool> ac(27, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'S')
            {
                continue;
            }
            double dis = ch[s[i][j] - 'a'];
            for (auto &[x, y] : shift)
            {
                double aa = sqrt((i - x) * (i - x) + (j - y) * (j - y));
                dis = min(dis, aa);
            }
            ch[s[i][j] - 'a'] = dis;
            ac[s[i][j] - 'a'] = 1;
        }
    }

    int q;
    int ans = 0;
    cin >> q;
    string bb;
    cin >> bb;
    for (int i = 0; i < q; i++)
    {
        if (bb[i] >= 'A' && bb[i] <= 'Z')
        {
            if (ch[bb[i] - 'A'] == 105)
            {
                cout << -1 << endl;
                return;
            }
            else if (ch[bb[i] - 'A'] > x)
            {
                ans++;
            }
        }
        else
        {
            if (!ac[bb[i] - 'a'])
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}