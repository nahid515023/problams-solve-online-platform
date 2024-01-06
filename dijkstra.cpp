#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> g[n + 5];
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({w, v});
    }

    vector<int> dist(n + 5, 1e18);
    vector<bool> vis(n + 5, 0);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 1});
    dist[1] = 0;
    while (!pq.empty())
    {
        auto [w, v] = pq.top();
        pq.pop();
        if (vis[v])
            continue;
        vis[v] = 1;
        for (auto x : g[v])
        {
            if (dist[v] + x.first < dist[x.second])
            {
                dist[x.second] = dist[v] + x.first;
                pq.push({dist[x.second], x.second});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << dist[i] << " ";
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}