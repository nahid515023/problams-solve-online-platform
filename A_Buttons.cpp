#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<bool> vis(n + 5, 0);
    for (int i = n; i > 0; i--)
    {
        int x = i;
        while (x % 2 == 0 && !vis[x])
        {
            cout << x << " ";
            vis[x] = 1;
            x /= 2;
        }
        if (i % 2 == 1 && !vis[i])
        {
            cout << x << " ";
        }
        else if (x % 2 == 1 && !vis[x])
        {
            cout << x << " ";
            vis[x] = 1;
        }
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