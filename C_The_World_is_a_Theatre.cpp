#include <bits/stdc++.h>
using namespace std;
#define int long long
int ar[60][60];

void solve()
{
    for (int i = 0; i <= 60; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
                ar[i][j] = 1;
            else
                ar[i][j] = ar[i - 1][j] + ar[i - 1][j - 1];
        }
    }
    int n, m, k;
    cin >> n >> m >> k;
    int ans = 0;
    for (int i = 4; i <= n; i++)
    {
        int j = k - i;
        if (j > m || j == 0)
            continue;
        ans += (ar[n][i] * ar[m][j]);
    }
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