#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = (b + c + d) * (b + c + d) - b * b - d * d - f * f;
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