#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int tot = 0, ex = 0;
    vector<int> mi(m + 1, 0), rg(m + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        mi[i] = x;
        rg[i] = y - x;
        tot += x;
        ex += (y - x);
    }

    if (tot + ex < n)
    {
        cout << -1 << endl;
        return;
    }

    int need = n - tot;
    for (int i = 0; i < m && need > 0; i++)
    {
        if (need >= rg[i])
        {
            mi[i] += rg[i];
            need -= rg[i];
        }
        else
        {
            mi[i] += need;
            need = 0;
        }
    }
    if (need == 0)
    {
        for (int i = 0; i < m; i++)
        {
            cout << mi[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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