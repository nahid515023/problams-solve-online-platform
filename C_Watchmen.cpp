#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> x, y;
    map<pair<int, int>, int> sm;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x[a]++;
        y[b]++;
        sm[{a, b}]++;
    }
    int ans = 0;
    for (auto [b, a] : x)
    {
        ans += (a * (a - 1)) / 2;
    }
    for (auto [b, a] : y)
    {
        ans += (a * (a - 1)) / 2;
    }
    for (auto [b, a] : sm)
    {
        ans -= (a * (a - 1)) / 2;
    }
    cout<<ans<<endl;
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