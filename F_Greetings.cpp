#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
using namespace std;
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    ordered_set<int> os;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        os.insert(y);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x = v[i].second;
        int a = os.order_of_key(x);
        os.erase(x);
        ans += (a);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}