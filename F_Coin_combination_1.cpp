#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[2000007];
const int mod = 1e9 + 7;

int f(int k, int ar[], int n)
{
    if (k == 0)
        return 1;
    if (dp[k] != -1)
        return dp[k];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (k >= ar[i])
        {
            ans += f(k - ar[i], ar, n);
            ans = ans % mod;
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