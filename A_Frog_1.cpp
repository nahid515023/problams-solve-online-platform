#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int ar[100007];
int dp[100007];
int fun(int i)
{
    if (dp[i] != -1)
        return dp[i];
    int ans = 0;
    
    if (i + 1 < n)
        ans = fun(i + 1) + abs(ar[i] - ar[i + 1]);
    if (i + 2 < n)
        ans = min(ans, fun(i + 2) + abs(ar[i] - ar[i + 2]));
    return dp[i] = ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int x = fun(0);
    cout << x << endl;
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