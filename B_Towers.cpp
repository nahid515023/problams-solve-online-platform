#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    multiset<pair<int, int>> ms;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ms.insert({x, i});
    }
    vector<pair<int, int>> ans;
    vector<bool> use(n, 0);
    while (k > 0 && ms.begin()->first != ms.rbegin()->first)
    {
        int x = ms.rbegin()->first;
        int i = ms.rbegin()->second;
        if (use[i])
        {
            break;
        }

        int y = ms.begin()->first;
        int j = ms.begin()->second;
        use[j] = 1;
        ms.erase(ms.find({x, i}));
        ms.erase(ms.begin());
        if (x > 1)
            ms.insert({--x, i});
        ms.insert({++y, j});
        ans.push_back({i, j});
        k--;
    }
    cout << (ms.rbegin()->first - ms.begin()->first) << " " << ans.size() << endl;
    for (auto &x : ans)
        cout << x.first << " " << x.second << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}