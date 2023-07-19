#include <bits/stdc++.h>
using namespace std;
#define __int128 long long

const int mod = 1000000007;

int binpow(int a, int n)
{
    if (n == 0)
        return 1;

    int ans = binpow(a, n / 2);
    if (n & 1)
    {
        ans = (((ans * ans) % mod) * a) % mod;
    }
    else
    {
        ans = (ans * ans) % mod;
    }
    return ans;
}

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int x = binpow(a, n);
    int y = binpow(b, n);
    int z = (x + y) % mod;
    int ans = __gcd(z, abs(a - b));
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