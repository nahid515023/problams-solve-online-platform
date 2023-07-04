#include <bits/stdc++.h>
using namespace std;
#define int long long

int bigMod(int base, int power, int mod)
{
    if (power == 0)
        return 1;

    if (power < 0)
    {
        base = 1 / base; // Handle negative power by taking the reciprocal of the base
        power = -power;  // Make the power positive
    }

    if (power & 1)
    {
        return ((base % mod) * bigMod(base, power - 1, mod)) % mod;
    }
    else
    {
        int x = (bigMod(base, power / 2, mod)) % mod;
        return (x * x) % mod;
    }
}


void solve()
{
    int base, power, mod;
    cin >> base >> power >> mod;
    cout << bigMod(base, power, mod) << endl;
    cout << big_mod(base, power, mod) << endl;
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
