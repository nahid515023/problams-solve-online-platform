#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int ans = 1e18;
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cnt += min(a[i], b[i]);
        if (i < m)
        {
            if (b[i] < a[i])
            {
                ans = min(cnt - b[i] + a[i], ans);
            }
            else
                ans = min(cnt, ans);
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}