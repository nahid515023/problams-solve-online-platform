#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int gc;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i == 0)
        {
            gc = a;
            continue;
        }
        gc = __gcd(a, gc);
    }

    int ans = 0;
    // cout << gc << endl;

    for (int i = 1; i * i <= gc; i++)
    {
        if (gc % i == 0)
        {
            ans += 1;
            if ((gc / i) != i)
                ans += 1;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}