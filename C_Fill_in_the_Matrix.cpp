#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int ar[n][m];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = i;
        for (int j = 0; j < m; j++)
        {
            x %= m;
            ar[i][j] = x;
            x = (x + 1);
        }
    }
    if (m == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << min(n + 1, m) << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == n - 1)
            {
                cout << ar[i - 1][j] << " ";
            }
            else
                cout << ar[i][j] << " ";
        }
        cout << endl;
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