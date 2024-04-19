#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int ar[x];
    for (int i = 0; i < x; i++)
        cin >> ar[i];
    sort(ar, ar + x);
    int ans = x - 2;
    for (int i = 0; i+1 < x; i++)
    {
        if (ar[i + 1] - ar[i] == 2)
        {
            ans++;
        }
    }
    if (ar[0] - ar[x - 1] + n == 2)
        ans++;
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