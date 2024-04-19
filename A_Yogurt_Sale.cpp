#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if (a * 2 > b)
    {
        ans += (n / 2) * b;
        ans += (n % 2) * a;
    }
    else
    {
        ans += (n * a);
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}