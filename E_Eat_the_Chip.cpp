#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, a, b, x, y;
    cin >> n >> m >> a >> b >> x >> y;
    if (b + 1 >= y && b - 1 <= y && a < x)
    {
        int aa = x - a;
        if (aa % 2 == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    else if (a < x && ((abs(x - b) + abs(y - a)) & 1))
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Draw" << endl;
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