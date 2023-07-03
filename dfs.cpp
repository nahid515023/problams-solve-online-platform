#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> g[100000];
vector<int> st(100001), ed(100001);
int s = 1, e = 0;

void dfs(int root, int prv)
{
    // cout << prv << " --> " << root << endl;
    st[root] = s++;
    for (int &v : g[root])
    {
        if (v == prv)
            continue;
        dfs(v, root);
    }
    ed[root] = s++;
}

void solve()
{
    int u, v;
    cin >> u >> v;
    for (int i = 1; i <= u; i++)
    {
        st[i] = 0;
        ed[i] = 0;
        g[i].clear();
    }
    for (int i = 0; i < v; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1, -1);
    for (int i = 1; i <= u; i++)
    {
        if (st[i] == 0 && ed[i] == 0)
            continue;
        cout << i << " - " << st[i] << " - " << ed[i] << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
