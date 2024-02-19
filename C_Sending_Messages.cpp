#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        int x = (v[i] - p) * a;
        int mi = min(x, b);
        f -= mi;
        p = v[i];
        if (f <= 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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