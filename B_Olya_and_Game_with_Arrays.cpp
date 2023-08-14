#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << 2 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        int mx = 0;
        for (int j = 1; j <= n - i; j++)
        {
            s += (j * j);
            mx = max(mx, j * j);
        }
        int x = 0;
        for (int j = n - i + 1; j <= n; j++)
        {

            s += ((n - x) * j);
            mx = max(mx, (n - x) * j);
            x++;
        }
        ans = max(s - mx, ans);
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