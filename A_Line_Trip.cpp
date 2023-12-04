#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    int ans = 0;
    int prv = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, (v[i] - prv));
        prv = v[i];
    }
    if (v[n - 1] != k)
    {
        ans = max(ans, (k - v[n - 1]) * 2);
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}