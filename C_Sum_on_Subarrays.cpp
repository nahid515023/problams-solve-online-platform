#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int inx = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i * (i + 1) / 2;
        if (x <= k)
        {
            inx = i;
        }
        else
        {
            break;
        }
    }

    for (int i = 1; i <= inx; i++)
    {
        cout << 2 << " ";
    }
    int ex = k - (inx * (inx + 1) / 2);
    int val = inx * 2 - ((ex - 1) * 2)-1;
    if (ex != 0)
    {
        inx++;
        cout << -val << " ";
    }
    for (int i = inx + 1; i <= n; i++)
    {
        cout << -1000 << " ";
    }
    cout << endl;
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