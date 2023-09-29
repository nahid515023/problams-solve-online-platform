#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, w;
    cin >> n >> w;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int l = 1, h = 10000000000;
    int ans = 1;
    while (l <= h)
    {
        int m = (l + h) / 2;
        int x = 0;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] < m)
            {
                x += (m - ar[i]);
            }
        }

        if (x <= w)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            h = m - 1;
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