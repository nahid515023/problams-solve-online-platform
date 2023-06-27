#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int N = (int)1e7;

    vector<int> dp(n + 1, -N);

    dp[0] = 0;

    for (int i = 0; i < n; i++)
    {
        int x = dp[a[i]];
        dp[a[i]] = max(dp[a[i]], dp[0] - i);
        dp[0] = max(dp[0], x + i + 1);
    }
    cout << dp[0] << endl;
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