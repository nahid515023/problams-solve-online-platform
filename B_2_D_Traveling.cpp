#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    a--;
    b--;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    if (a < k && b < k)
    {
        cout << 0 << endl;
        return;
    }

    int dis = abs(v[a].first - v[b].first) + abs(v[a].second - v[b].second);
    int mi1 = 1e10;
    int mi2 = 1e10;
    for (int i = 0; i < k; i++)
    {
        mi1 = min(mi1, abs(v[a].first - v[i].first) + abs(v[a].second - v[i].second));
        mi2 = min(mi2, abs(v[b].first - v[i].first) + abs(v[b].second - v[i].second));
    }
    dis = min(dis, mi1 + mi2);
    cout << dis << endl;
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