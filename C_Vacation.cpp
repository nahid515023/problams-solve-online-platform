#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100007;
int n;
int ar[N][4];
int dp[N][4];

int f(int pos, int i)
{
    if (i > 2)
        return 0;
    if (pos == n)
    {
        return 0;
    }
    if (dp[pos][i] != -1)
        return dp[pos][i];
    int ans = 0;
    for (int j = 0; j < 3; j++)
    {
        if (i == j)
        {
            continue;
        }
        ans = max(ans, f(pos + 1, j) + ar[pos][j]);
     
    }
    return dp[pos][i] = ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ar[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        ans = max(ans, f(1, i) + ar[0][i]);
    }
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    // freopen("input.txt", "r", stdin);
    while (t--)
    {
        solve();
    }
    return 0;
}