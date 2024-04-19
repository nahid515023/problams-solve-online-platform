#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, y, a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    int ans = 1;
    if (y < b && y < d)
    {
        int h = min(b, d) - y;
        ans += h;
    }
    if (y > b && y > d)
    {
        int h = y - max(b, d);
        ans += h;
    }
    if (a > x && c > x)
    {
        ans += (min(a, c) - x);
    }
    if (a < x && c < x)
    {
        ans += (x - max(a, c));
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