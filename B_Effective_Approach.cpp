#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[a] = i + 1;
    }
    int q;
    int ans1 = 0, ans2 = 0;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        ans1 += v[x];
        ans2 += n - v[x] + 1;
    }
    cout << ans1 << " " << ans2 << endl;
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