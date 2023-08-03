#include <bits/stdc++.h>
using namespace std;
#define int long long
int mods[1000002];

void solve()
{
    mods[0] = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        mods[i] = mods[i - 1] ^ i;
    }
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        ans ^= a;
    }

    for (int i = 1; i <= n; i++)
    {
        int val = n / i;
        int rem = n % i;
        ans ^= mods[rem];
        if (val & 1)
        {
            ans ^= mods[i - 1];
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