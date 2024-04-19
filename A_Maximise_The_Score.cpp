#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n * 2];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n + n);
    int ans = 0;
    for (int i = 0; i < 2 * n; i += 2)
    {
        ans += min(ar[i], ar[i + 1]);
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