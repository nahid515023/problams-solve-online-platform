#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int l = 0, h = 10000000000;
    int ans = 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        int v = (m * (m - 1))/ 2;
        if (v == n)
        {
            cout << m << endl;
            return;
        }
        if (v < n)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    int x = ans * (ans - 1) / 2;
    ans +=(n-x);
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