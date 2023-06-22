#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> mp[200007];
vector<int> vr(200007);

void dfs(int u, int v)
{
    if (mp[u].size() == 1 && u != 1)
    {
        vr[u] = 1;
    }
    for (auto x : mp[u])
    {
        if (x != v)
        {
            dfs(x, u);
            vr[u] += vr[x];
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        mp[i].clear();
        vr[i] = 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }

    dfs(1, -5);

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int ans = vr[x] * vr[y];
        cout << ans << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}