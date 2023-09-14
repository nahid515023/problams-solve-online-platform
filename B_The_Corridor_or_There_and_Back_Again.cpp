#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    multiset<pair<int, int>> ms;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        ms.insert({x, y});
    }
    int ans = 1e12;
    int dis = 0;
    vector<pair<int, int>> v;
    while (!ms.empty())
    {
        int x = ms.begin()->first;
        int y = ms.begin()->second;
        int a = (y + 1) / 2;
        v.push_back({x, a});
        ms.erase(ms.begin());
    }

    for (auto [x, y] : v)
    {
        if (ans >= x)
            ans = min(ans, x + y - 1);
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