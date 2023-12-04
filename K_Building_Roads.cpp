#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> g[100005];
bool vis[100005];

void dfs(int u)
{
    vis[u] = 1;
    for (auto v : g[u])
    {
        if (!vis[v])
            dfs(v);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int ans = 0;
    vector<int>v;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            v.push_back(i);
            ans++;
            dfs(i);
        }
    }
    cout<<v.size()-1<<endl;
    for(int i=1;i<v.size();i++)
    {
        cout<<v[i-1]<<" "<<v[i]<<endl;
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