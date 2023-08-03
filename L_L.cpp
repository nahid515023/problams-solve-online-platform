#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(int n, int p, int m)
{
    if (p == 0)
        return 1;

    int ans = f(n, p / 2, m);

    if (p & 1)
    {
        ans = ans * ans * n;
        ans %= m;
    }
    else
    {
        ans = ans * ans;
        ans %= m;
    }
    return ans;
}

void solve()
{
    
    cout << f(45,50,70) << endl;
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