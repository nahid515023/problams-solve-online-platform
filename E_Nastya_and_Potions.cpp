#include <bits/stdc++.h>
using namespace std;
#define int long long

void dfs(int u, vector<int> g[], int ar[], vector<bool> vis)
{
    int sum = 0;
    bool ok = 0;
    vis[u] = true;
    for (auto v : g[u])
    {
        if (!vis[v])
        {
            dfs(v, g, ar, vis);
            ok = 1;
            sum += ar[v];
        }
    }
    if (ok)
        ar[u] = min(ar[u], sum);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        ar[x] = 0;
    }

    vector<int> g[n + 1];

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            int x;
            cin >> x;
            g[i].push_back(x);
            g[x].push_back(i);
        }
    }

    vector<bool> vis(n + 5, false);

    dfs(1, g, ar, vis);

    for (int i = 1; i <= n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
