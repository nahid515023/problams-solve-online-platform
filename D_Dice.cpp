#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int mod = 1e9+7;
int dp[1000007];

int f(int sum)
{
    if (sum > n)
        return 0;
    if (sum == n)
    {
        return 1;
    }
    if (dp[sum] != -1)
        return dp[sum];
    int ans = 0;
    for (int i = 1; i <= 6 && sum + i <= n; i++)
    {
        ans += f(sum + i);
        ans=ans%mod;
    }
    return dp[sum]=ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    int ans = f(0);
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