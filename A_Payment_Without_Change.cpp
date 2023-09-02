#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, n, s;
    cin >> a >> b >> n >> s;
    int d = s / n;
    d = b + min(d, a) * n;

    if (d < s)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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