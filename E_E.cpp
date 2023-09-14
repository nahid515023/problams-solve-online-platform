#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    multiset<pair<int, int>> ms;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
        ms.insert({b - a + 1, i});
    }
    int x = ms.begin()->first;
    cout << x << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i % x << " ";
    }
    cout << endl;
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