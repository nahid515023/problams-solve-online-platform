#include <bits/stdc++.h>
using namespace std;
#define int long long
bool ok = false;
int se = -1;
int sr = -1;

bool dfs(vector<vector<int>> &g, vector<bool> &vis, vector<int> &parent, int u)
{
    vis[u] = true;
    for (int v : g[u])
    {
        if (!vis[v])
        {
            parent[v] = u;
            bool ok = dfs(g, vis, parent, v);
            if (ok)
                return true;
        }
        else
        {
            if (parent[u] != v)
            {
                se = u;
                sr = v;
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n + 1);
    vector<bool> vis(n + 1, false);
    vector<int> parent(n + 1, 0);

    int s = -1;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        s = u;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ok = dfs(g, vis, parent, i);
            if (ok)
                break;
        }
    }

    vector<int>ans;
    if (ok)
    {
        ans.push_back(sr);
        while (sr != se)
        {
            ans.push_back(se);
            se = parent[se];
        }
        ans.push_back(se);

        cout << ans.size() << endl;
        for (int aa : ans)
            cout << aa << " ";
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
