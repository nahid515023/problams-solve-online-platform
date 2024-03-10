#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < m; j++)
        cin >> b[j];

    int l = 0, r = 1e10;
    int ans=0;

    while (l <= r)
    {
        int md = (l + r) / 2;
        bool ok = 1;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i] - md;
            int y = a[i] + md;
            while (!(b[j] >= x && b[j] <= y) && j < m)
            {
                j++;
            }

            if (!(b[j] >= x && b[j] <= y))
            {
                ok=0;
                break;
            }
        }
        if (ok)
        {
            ans=md;
            r = md - 1;
        }
        else
        {
            l = md + 1;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}