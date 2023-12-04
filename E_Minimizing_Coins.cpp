#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[2000007];

int f(int k, int ar[], int n)
{
    if (k == 0)
        return 0;
    if (dp[k] != -1)
        return dp[k];
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (k >= ar[i])
        {
            ans = min(ans, f(k - ar[i], ar, n) + 1);
        }
    }
    return dp[k] = ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int x = f(k, ar, n);
    if (x == INT_MAX)
        x = -1;
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