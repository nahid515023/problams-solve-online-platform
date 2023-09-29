#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    bool ans = 1;
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x >= a && y >= b)
        {
            ans = 0;
        }
    }
    if (ans)
        cout << a << endl;
    else
        cout << -1 << endl;
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