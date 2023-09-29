#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int a[n];
    a[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        a[i] = ar[i] & a[i - 1];
        cout << a[i - 1] << " ";
    }
    cout << a[n - 1] << endl;

    int dp[32][n];

    for (int j = 31; j >= 0; j--)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                if (a[i] & (1 << j))
                    dp[j][i] = 1;
                else
                    dp[j][i] = 0;
            }
            else if (a[i] & (1 << j))
                dp[j][i] = dp[j][i + 1] + 1;
            else
                dp[j][i] = 0;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, k;
        cin >> l >> k;
        int mx=;
        for(int i=l;i<32;i++)
        {
            if(dp[i][l-1]>0)
            {
                mx = max(mx,dp[i][l-1]);
            }
        }
        if(mx>0) cout
    }
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