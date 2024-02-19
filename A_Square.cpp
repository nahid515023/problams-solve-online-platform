#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    vector<pair<int, int>> v;
    for (int i = 0; i < 4; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    int x = v[0].first - v[1].first;
    int y = v[0].second - v[1].second;
    int a = sqrt(x * x + y * y);
    cout << a * a << endl;
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