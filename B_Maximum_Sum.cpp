#include <bits/stdc++.h>
using namespace std;
#define int long long

int M = 1000000007;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int tot = ar[0];

    vector<int> dp(n + 5, 0);
    dp[0] = ar[0];
    int ans = dp[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + ar[i], ar[i]);
        ans = max(ans, dp[i]);
        tot += ar[i];
    }

    if (ans <= 0)
        ans = 0;

    int curr = ans;

    while (k--)
    {
        tot += curr;
        tot %= M;
        curr += curr;
        curr %= M;
    }
    if (tot < 0)
    {
        tot = M + tot;
    }
    cout << tot << endl;
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