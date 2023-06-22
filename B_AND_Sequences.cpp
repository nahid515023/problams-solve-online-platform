#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mi = 1e10;
    for (auto &x : n)
    {
        cin >> x;
        int mi = min(mi, x);
    }

    int cnt = 0;
    for (auto &x : v)
    {
        if (mi == x)
            cnt++;
        if ((mi & x) != mi)
        {
            cout << 0 << endl;
            return;
        }
    }

    int fact = 1;
    int mod = int(1e9 + 7);

    for (int i = 1; i <= n - 2; i++)
    {
        fact = (fact * i) % mod;
    }
    int ans = (((fact * cnt) % mod) * (cnt - 1)) % mod;
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