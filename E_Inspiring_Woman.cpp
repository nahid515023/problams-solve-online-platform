#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int t, n;
    cin >> t >> n;
    int even = t / 2;
    int odd = ((t + 1) / 2);
    int ans = min(n, odd) * 2 + n - min(n, odd);
    cout << ans;
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