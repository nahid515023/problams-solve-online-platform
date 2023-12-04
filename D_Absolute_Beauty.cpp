#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int mi = 1e15;
    int mx = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i] - b[i]);
        mx = max(mx, min(a[i], b[i]));
        mi = min(mi, max(a[i], b[i]));
    }

    cout << ans + (mx > mi ? 2 * (mx - mi) : 0) << endl;
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