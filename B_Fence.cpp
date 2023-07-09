#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
    }

    int ans = 1;
    int s = (int)1e9;
    for (int i = k; i <= n; i++)
    {
        if (s > a[i] - a[i - k])
        {
            ans = i-k+1;
            s=a[i]-a[i-k];
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}