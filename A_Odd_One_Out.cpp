#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    map<int, int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    for (auto [x, y] : mp)
    {
        if (y == 1)
        {
            cout << x << endl;
            return;
        }
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