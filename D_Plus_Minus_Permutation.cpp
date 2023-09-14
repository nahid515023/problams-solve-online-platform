#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int lc = (x / __gcd(x, y)) * y;
    int lc2 = n / lc;
    int p = (n / x) - lc2;
    int q = (n / y) - lc2;
    int s1 = (n * (n + 1)) / 2;
    int s2 = ((n - p) * (n - p + 1))/2;
    int tot = s1 - s2;
    int ss = q * (q + 1)/2;
    int ans = tot - ss;
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