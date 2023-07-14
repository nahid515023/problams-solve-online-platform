#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    while (x != y)
    {
        if (x > y)
            x /= 2;
        else
            y /= 2;
        cnt++;
    }
    cout << cnt << endl;
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