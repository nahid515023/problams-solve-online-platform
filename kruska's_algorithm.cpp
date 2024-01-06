#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 7;
int parent[N], Size[N];

void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int Find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = Find(parent[v]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int ans[N];

void dfs(vector<pair<int, int>> g[], int u, int p)
{
    for (auto [x, y] : g[u])
    {
        if (x != p)
        {
            ans[x] = ans[u] + y;
            dfs(g, x, u);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }
    sort(edges.begin(), edges.end());
    for (int i = 1; i <= n; i++)
        make(i);

    vector<pair<int, int>> g[n + 5];
    int tot = 0;
    for (int i = 0; i < m; i++)
    {
        auto x = edges[i];
        if (Find(x[2]) != Find(x[1]))
        {
            tot += x[0];
            g[x[2]].push_back({x[1], x[0]});
            g[x[1]].push_back({x[2], x[0]});
            Union(x[2], x[1]);
            cout << x[1] << "-->" << x[2] << endl;
        }
    }

    dfs(g, 1, -1);
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << tot << endl;
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