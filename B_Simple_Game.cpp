#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int l = m - 1;
    int r = n - m;
    // cout << l << " " << r << endl;
    if (l == 0 && r == 0)
    {
        cout << m << endl;
        return;
    }
    if (l >= r)
    {
        cout << m - 1 << endl;
    }
    else 
    {
        cout << m + 1 << endl;
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