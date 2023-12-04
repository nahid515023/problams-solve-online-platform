#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (k > 3)
    {
        cout << 0 << endl;
        return;
    }
    if (k == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (m == 0 && k != 1)
    {
        cout << 0 << endl;
        return;
    }

    if (m < n)
    {
        if (k == 2)
            cout << m << endl;
        else
            cout << 0 << endl;
        return;
    }

    if (k == 2)
    {
        int ans = n + (m / n) - 1;
        cout << ans << endl;
        return;
    }
    else
    {
        int ans = m - n - (m / n) + 1;
        cout << ans << endl;
        return;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}