#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(int b, int n, int m)
{
    if (n == 0)
        return 1;

    int val = f(b, n / 2, m);
    if (n & 1)
    {
        val = (val * val * b) % m;
    }
    else
    {
        val = (val * val) % m;
    }
    return val;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = f(3, n, m) - 1;
    if (ans < 0)
        ans += m;
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