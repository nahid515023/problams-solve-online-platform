#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int b, y;
    cin >> b >> y;
    int ans = 0;
    for (int i = 0; i < 2000; i++)
    {
        int x = ceil(log2(i));
        int p = x * y;
        int a = x / 2;
        int aa = (x + 1) / 2;
        p += a * a + aa * aa;
        if (p <= b)
        {
            ans = i;
        }
        else
        {
            break;
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