#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ar[n + 1][m + 1];
    int pre[n + 1][m + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
            {
                pre[i][j] = 0;
            }
            else
            {
                pre[i][j] = ar[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
            }
        }
    }

    int start = 1, end = max(n, m);
    int ans = end;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        bool f = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (ar[i][j] == 0)
                    continue;

                int tx = min(i + mid, n);
                int ty = min(j + mid, m);
                int lx = i - (mid + 1);
                int ly = j - (mid + 1);
                int cur = pre[tx][ty];
                if (lx > 0)
                {
                    cur -= pre[lx][ty];
                }
                if (ly > 0)
                {
                    cur -= pre[tx][ly];
                }

                if ((lx > 0 && ly > 0))
                    cur += pre[lx][ly];
                if (cur >= k)
                {
                    f = 1;
                    break;
                }
            }
            if (f)
                break;
        }
        if (f)
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}