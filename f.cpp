#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<pair<int, int>> v;
    int mx[m + 5];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
        mx[b] = max(mx[b], a);
    }
    sort(v.begin(), v.end());
    int dis[m + 5];
    for (int i = 1; i <= m; i++)
    {
        int a;
        cin >> a;
        dis[i] = a;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}