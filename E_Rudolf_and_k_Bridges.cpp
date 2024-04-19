#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k, d;
    cin >> n >> m >> k >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> dp(m, 1e9);
        vector<int> v(m);
        multiset<int> ms = {1};
        dp[0] = 1;
        cin >> v[0];
        for (int j = 1; j < m - 1; j++)
        {
            cin >> v[j];
            dp[j] = *ms.begin() + v[j] + 1;
            if (j - d - 1 >= 0)
            {
                ms.erase(ms.find(dp[j - d - 1]));
            }
            ms.insert(dp[j]);
        }
        cin >> v.back();
        dp.back() = 1 + *ms.begin();
        a[i] = dp.back();
    }
    int ans = 1e18, cnt = 0;
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt < k)
        {
            val += a[i];
            cnt++;
        }
        else
        {
            ans = min(ans, val);
            val += (a[i] - a[i - k]);
        }
    }
    ans = min(ans, val);
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}