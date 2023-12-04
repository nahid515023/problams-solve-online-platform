#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int binPow(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binPow(a, b / 2);
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
    int a, b;
    cin >> a >> b;
    int x = binPow(a, b);
    cout << x << endl;
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