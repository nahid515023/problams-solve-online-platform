#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, p, x, y;
    cin >> n >> p >> x >> y;

    int minDay = 0;

    int l = 0, h = n;

    while (l <= h)
    {
        int m = (l + h) / 2;
        int a = (min(m*2, ((n + 6) / 7)) * y) + (x * m);
        if (a >= p)
        {
            minDay = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << n - minDay << endl;
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