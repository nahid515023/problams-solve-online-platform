#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    double ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);

    double mx = 0;

    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            mx = (double)ar[i];
            mx = max((double)m - ar[i], mx);
            continue;
        }
        if (i == 0)
        {
            mx = (double)ar[i];
            continue;
        }
        if (i == n - 1)
        {
            mx = max((double)m - ar[i], mx);
        }
        mx = max(mx, (double)(ar[i] - ar[i - 1]) / 2);
    }
    printf("%.10lf\n", mx);
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