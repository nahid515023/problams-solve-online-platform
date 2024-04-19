#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int k, q;
    cin >> k >> q;
    int a[k];
    for (int i = 0; i < k; i++)
        cin >> a[i];
    while (q--)
    {
        int x;
        cin >> x;
        int ans = min(x, a[0]-1);
        cout << ans << " ";
    }
    cout << endl;
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