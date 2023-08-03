#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1 3 0" << endl;
        int a = 1, b = 3, c = 0;
        // cout << ((a | b) & (b | c) & (a | c)) << endl;

        return;
    }
    if (n & 1)
    {
        int a = n;
        int b = 1;
        int c = n ^ 1;
        cout << a << " " << b << " " << c << endl;
        // cout << ((a | b) & (b | c) & (a | c)) << endl;
    }
    else
    {
        int a = n;
        int b = 1 << 27;
        int c = n ^ 1;
        cout << a << " " << b << " " << c << endl;
        // cout << ((a | b) & (b | c) & (a | c)) << endl;
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