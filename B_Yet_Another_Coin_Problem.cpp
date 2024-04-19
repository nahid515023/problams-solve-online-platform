#include <bits/stdc++.h>
using namespace std;
#define int long long

int func(int n)
{
    int ans = n / 15;
    n %= 15;
    ans += n / 6;
    n %= 6;
    ans += n / 3;
    n %= 3;
    return ans + n;
}

void solve()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        int ans = func(n);
        cout << ans << endl;
    }
    else if (n < 20)
    {
        int ans = min(func(n), func(n - 10) + 1);
        cout << ans << endl;
    }
    else
    {
        int ans = min({func(n), func(n - 10) + 1, func(n - 20) + 2});
        cout << ans << endl;
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