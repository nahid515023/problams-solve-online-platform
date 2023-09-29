#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int ar[100007];
int dp[100007];
int fun(int i)
{
    int ans = INT_MAX;


    if (i == n - 1)
        return 0;

    if (dp[i] != -1)
        return dp[i];
        
    for (int j = 1; j <= k; j++)
    {
        if (i + j < n)
            ans = min(ans, fun(i + j) + abs(ar[i] - ar[i + j]));
    }
    return dp[i] = ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int x = fun(0);
    cout << x << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}