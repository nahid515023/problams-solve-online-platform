#include <bits/stdc++.h>
using namespace std;
#define int long long

int dp[500][40008];

vector<int> p;
void f()
{
    int cnt = 0;
    for (int i = 1; i <= 4e4 + 10; i++)
    {
        string a = to_string(i);
        string b = a;
        reverse(a.begin(), a.end());
        if (a == b)
        {
            p.push_back(i);
            cnt++;
        }
    }
}

int fun(int i, int n)
{
    if (n < 0 || p.size() <= i)
        return 0;

    if (dp[i][n] != -1)
        return dp[i][n];

    if (n == 0)
    {
        return 1;
    }
    int ans = fun(i + 1, n);
    ans += fun(i, n - p[i]);
    return dp[i][n] = ans % 1000000007;
}

void solve()
{
    int n;
    cin >> n;
    int ans = fun(0, n);
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
    f();
    memset(dp, -1, sizeof(dp));
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}