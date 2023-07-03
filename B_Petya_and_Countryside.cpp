#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int mx = 1;
        int x = i - 1;
        int y = i + 1;
        while (x >= 0 && v[x] <= v[x + 1])
        {
            x--;
            mx++;
        }
        while (y < n && v[y] <= v[y - 1])
        {
            y++;
            mx++;
        }
        ans = max(mx, ans);
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