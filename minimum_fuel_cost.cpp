#include <bits/stdc++.h>
using namespace std;
#define int long long
int ans = 0;

int dfs(vector<vector<int>> &g, int u, int prv, int st)
{
    int p = 1;
    //start
    for (auto x : g[u])
    {
        if (x != prv)
        {   
            // prente to child
            p += dfs(g, x, u, st);
        }
    }
    //end
    if (u > 0)
        ans += ((p - 1) / st) + 1;
    return p;
}

void solve()
{
    vector<vector<int>> g(6 + 1);
    for (int i = 0; i < 6; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int x = dfs(g, 0, -1, 2);
    cout << x << endl;
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    freopen("input.txt", "r", stdin);
    while (t--)
    {
        solve();
    }
    return 0;
}