#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<pair<int, int>> ar;
    for (int i = 2; i <= n; i++)
    {
        if (v[i] == x && v[i - 1] == x)
            ar.push_back({i - 1, i});
    }
    int ans = 0, var = 0;
    for (auto p : ar)
    {
        int p1 = p.first;
        int p2 = p.second;
        while (p1 >= 1 && v[p1] == x)
        {
            var++;
            p1--;
        }
        while (p2 <= n && v[p2] == x)
        {
            var++;
            p2++;
        }
        int color;
        int var2 = 0;
        while (p1 >= 1 && p2 <= n)
        {
            color = v[p1];
            while (p1 >= 1 && v[p1] == color)
            {
                var2++;
                p1--;
            }
            while (p2 <= n && v[p2] == color)
            {
                var2++;
                p2++;
            }
            if (var2 < 3)
                break;
            var += var2;
            var2 = 0;
        }
        ans = max(ans, var);
        var = 0;
    }
    cout << ans << endl;
}

int32_t main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    solve();
    return 0;
}