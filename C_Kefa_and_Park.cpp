#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> g[100008];
int vis[100008];
int n, m;
int ans = 0;
void dfs(int root, int par, int cat)
{
    if (vis[root])
    {
        cat++;
    }
    else
    {
        cat = 0;
    }

    if (cat == m + 1)
    {
        return;
    }
    bool lf = 1;

    for (auto &x : g[root])
    {
        if (par == x)
            continue;

        lf = 0;
        dfs(x, root, cat);
    }
    if (lf)
        ans++;
}

void solve()
{

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> vis[i];

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, -1, 0);
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}