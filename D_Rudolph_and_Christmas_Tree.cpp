#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, d, h;
    cin >> n >> d >> h;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    double ans = .5 * d * h * n;
    for (int i = 1; i < n; i++)
    {
        double y = ar[i] - ar[i - 1];
        if (y < h && y > 0)
        {
            ans -= (.5  * (h - y) * (d / h));
        }
    }
    printf("%.10lf\n", ans);
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