#include <bits/stdc++.h>
using namespace std;
#define int long long

int binPow(int a, int b, int mod)
{
    if (b == 0)
        return 1;
    int res = binPow(a, b / 2, mod);
    if (b & 1)
    {
        res = (((res * res) % mod) * a) % mod;
    }
    else
    {
        res = (res * res) % mod;
    }
    return res;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mod = 1e9 + 7;
    int x = binPow(b, c, mod - 1);
    int ans = binPow(a, x, mod);
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