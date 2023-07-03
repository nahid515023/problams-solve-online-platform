#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(int n)
{
    int x = 0;
    while (n)
    {
        if (n % 10)
            x = x * 10 + n % 10;
        n /= 10;
    }
    return x;
}

void solve()
{
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    // cout << f(f(a)) <<" "<< f(b) << " " << f(c) << endl;
    if (f(f(a)) + f(f(b)) == f(f(c)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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