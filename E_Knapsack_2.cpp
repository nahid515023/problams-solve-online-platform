#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<int, int>> v;
int n, w;
dp[n][100005];

int fun(int i, int sum, int val)
{
    if (i == n)
        return 0;
    if (dp[{i, sum}] != 0)
        return dp[{i, sum}];
    int ans = 0;
    if (sum + v[i].first <= w)
        ans = fun(i + 1, sum + v[i].first) + v[i].second;
    ans = max(ans, fun(i + 1, sum));
    return dp[{i, sum}] = ans;
}

void solve()
{
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    int ans = fun(0, 0);
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