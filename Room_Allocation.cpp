#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y, i});
    }

    sort(v.begin(), v.end());

    multiset<pair<int, int>> ms;
    set<int> room;
    vector<int> ans(n, 0);
    int rm = 0;

    for (int i = 0; i < n; i++)
    {
        int x = v[i][0];
        int y = v[i][1];
        int z = v[i][2];
        while (!ms.empty() && x > ms.begin()->first)
        {
            auto it = ms.begin();
            room.insert(it->second);
            ms.erase(it);
        }
        if (room.empty())
        {
            rm++;
            room.insert(rm);
        }
        ans[z] = *room.begin();
        room.erase(room.begin());
        ms.insert({y, ans[z]});
    }
    cout << rm << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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