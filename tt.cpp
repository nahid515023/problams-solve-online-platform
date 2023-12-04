#include <bits/stdc++.h>
using namespace std;
#define int long long

bool f(int a, int b, int c)
{
    if (b % 2 == c % 2)
        return 1;
    return 0;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << f(a, b, c) << " " << f(b, a, c) << " " << f(c, a, b) << endl;
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