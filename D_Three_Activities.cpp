#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a, b, c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c.push_back({x, i});
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());
    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (a[i][1] != b[j][1] && a[i][1] != c[k][1] && b[j][1] != c[k][1])
                {
                    ans = max(ans, a[i][0] + b[j][0] + c[k][0]);
                }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}