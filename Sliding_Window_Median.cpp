#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
using namespace std;
template <class T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ordered_set<int> os;
    for (int i = 0; i < k - 1; i++)
        os.insert(v[i]);

    int x = 0;
    int mid = (k - 1) / 2;

    for (int i = k - 1; i < n; i++)
    {
        os.insert(v[i]);
        // for (auto aa : os)
        //     cout << aa << " ";
        cout << *os.find_by_order(mid) << " ";
        // cout << endl;
        os.erase(os.upper_bound(v[x]));
        x++;
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}