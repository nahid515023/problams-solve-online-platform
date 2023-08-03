#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, d;
    cin >> n >> d;
    int p = 10, nn = n, ans = n;
    while (n >= 0)
    {
        while (n % p / (p / 10) == 9)
        {
            if (nn - n <= d)
                ans = n;
            if (p > n)
                break;
            p *= 10;
        }
        n -= (p / 10);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}