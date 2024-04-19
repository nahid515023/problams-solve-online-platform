#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int k, n, a, b;
    cin >> k >> n >> a >> b;

    int l = 0, r = (k / a) - (k % a == 0);
    int ans = -1;

    if (r >= n)
    {
        cout << n << endl;
        return;
    }

    while (l <= r)
    {
        int m = (l + r) / 2;

        int ex = (k - (m * a));
        int x = (ex / b) - (ex % b == 0);

        if (m + x >= n)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
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