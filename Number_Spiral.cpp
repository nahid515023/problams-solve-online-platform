#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2 == 0)
            {
                x = x * x;
                int ans = x - (y - 1);
                cout << ans << endl;
            }
            else
            {
                x = ((x - 1) * (x - 1)) + 1;
                int ans = x + (y - 1);
                cout << ans << endl;
            }
        }
        else
        {
            if (y % 2 == 1)
            {
                y *= y;
                int ans = y - (x - 1);
                cout << ans << endl;
            }
            else
            {
                y = ((y - 1) * (y - 1)) + 1;
                int ans = y + (x - 1);
                cout << ans << endl;
            }
        }
    }
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