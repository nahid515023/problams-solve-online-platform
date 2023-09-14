#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int s, d, n;
    cin >> s >> d >> n;
    int ans = s + (d * (n - 1));
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