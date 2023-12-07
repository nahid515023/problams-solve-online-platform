#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> bfs(vector<vector<int>> &g, int u, int n)
{
    queue<int> q;
    q.push(u);
    vector<bool> vis(n + 1, 0);
    vector<int> parent(n + 1, -1);
    parent[u] = -1;
    vis[u] = 1;


    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        if (v == n)
            break;
        for (int x : g[v])
        {
            if (!vis[x])
            {
                vis[x] = 1;
                parent[x] = v;
                q.push(x);
            }
        }
    }
    // for (auto aa : parent)
    // {
    //     cout << aa << " ";
    // }
    // cout << endl;

    int i = n;
    vector<int> ans;
    ans.push_back(i);
    while (parent[i] != -1)
    {
        ans.push_back(parent[i]);
        i = parent[i];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    auto x = bfs(adj, 1, n);
    int aa = x.size();
    if (aa == 1)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    cout << aa << endl;

    for (int i = 0; i < aa; i++)
    {
        cout << x[i] << " ";
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