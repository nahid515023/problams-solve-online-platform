#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int mi = k * (k + 1) / 2;
    int a = n - k;
    int mx = (n * (n + 1) / 2) - (a * (a + 1) / 2);
    // cout << mx << endl;
    if (x >= mi && mx >= x)
    {
        // cout << x << " ";
        cout << "YES" << endl;
    }
    else
    {
        // cout << x << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}