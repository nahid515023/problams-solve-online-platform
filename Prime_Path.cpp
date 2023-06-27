#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100000 + 7;
bool vis[N];
vector<int> g[N];
vector<int> lp(N + 1);
vector<int> pr;
set<int> st;
int cnt = 0;

void dfs(int node, int pre)
{
    for (auto &x : g[node])
    {
        if (pre != x && st.find(x) == st.end())
        {
            cnt++;
            dfs(x, node);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
            st.insert(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j)
        {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i])
            {
                break;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < pr.size() && pr[i] <= n; i++)
    {
        cnt=0;
        dfs(pr[i], -1);
        ans+=(cnt*(cnt+1)/2);
    }
    cout<<ans<<endl;
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