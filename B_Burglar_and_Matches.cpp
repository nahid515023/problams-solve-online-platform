#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.rbegin(), v.rend());
    int ans = 0;
    while (n > 0 && v.size() > 0)
    {
        auto &[x, y] = *v.begin();
        if (n - y >= 0)
            ans += (x * y);
        else
            ans += (x * n);
        n -= y;
        v.erase(v.begin());
    }
    cout<<ans<<endl;
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