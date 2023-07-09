#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    int x = (1 << 30) - 1;
    for (int i = 0; i < n; i++)
    {
        x &= v[i];
    }
    int ans = 0;
    int a = (1 << 30) - 1;
    for (int i = 0; i < n; i++)
    {
        a &= v[i];
        if (a == 0)
        {
            ans++;
            a = (1 << 30) - 1LL;
        }
    }
    if (x > 0)
        ans++;
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