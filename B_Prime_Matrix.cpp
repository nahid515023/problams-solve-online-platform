#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n + 2][m + 2];

    vector<int> pr;
    pr.push_back(2);

    for (int i = 3; i <= 100007; i++)
    {
        bool ok = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            pr.push_back(i);
        }
    }

    int v[n + 5][m + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            int x = *lower_bound(pr.begin(), pr.end(), a[i][j]);
            v[i][j] = (x - a[i][j]);
            // cout << v[i][j] << " ";
        }
        cout << endl;
    }

    int ans = 10000000;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            s += v[i][j];
        }
        ans = min(s, ans);
    }
    for (int i = 0; i < m; i++)
    {
        int s = 0;
        for (int j = 0; j < n; j++)
        {
            s += v[j][i];
        }
        ans = min(s, ans);
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