#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 0 << endl;
    else if (n == 2)
        cout << 1 << endl;
    else if (n == 3)
        cout << 2 << endl;
    else if (n & 1)
        cout << 3 << endl;
    else
        cout << 2 << endl;
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