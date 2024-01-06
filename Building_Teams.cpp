#include <bits/stdc++.h>
using namespace std;
#define int long long

bool dfs(vector<vector<int>> &g, vector<bool> &vis, vector<int> &ans, int u, int grp)
{
    vis[u] = 1;
    ans[u] = grp;
    for (int &v : g[u])
    {
        if (vis[v])
        {
            if (ans[v] == ans[u])
                return false;
        }
        else
        {
            bool x = dfs(g, vis, ans, v, 3 - grp);
            if (x == false)
                return false;
        }
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool> vis(n + 1, 0);
    vector<int> ans(n + 1, 0);

    bool ok = true;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ok &= dfs(g, vis, ans, i, 1);
        }
    }
    if (!ok)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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