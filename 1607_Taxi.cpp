#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int l = 0, h = c;
    int ans = a;
    while (l < h)
    {
        int m = (l + h) / 2;
        if (a + (b * m) >= c - (d * m))
        {
            h = m;
            ans = a + (b * m);
        }
        else
        {
            l = m + 1;
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