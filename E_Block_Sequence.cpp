#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    vector<int> dp(n + 1, n);
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > n - i - 1)
        {
            dp[i] = min(n, dp[i + 1]);
        }
        else
        {
            dp[i] = min(dp[v[i] + i + 1] - v[i] - 1, dp[i + 1]);
        }
    }
    cout << dp[0] << endl;
}

int main()
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