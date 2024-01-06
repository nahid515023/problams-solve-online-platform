#include <bits/stdc++.h>
using namespace std;
#define int long long
const int inf = 1e12;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    int ar[n + 5][n + 5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                ar[i][j] = 0;
                continue;
            }
            ar[i][j] = inf;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ar[a][b] = min(c, ar[a][b]);
        ar[b][a] = min(c, ar[b][a]);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (ar[i][k] != inf && ar[k][j] != inf)
                    ar[i][j] = min(ar[i][j], ar[i][k] + ar[k][j]);
            }
        }
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int x = ar[a][b];
        if (x == inf)
            cout << -1 << endl;
        else
            cout << x << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}