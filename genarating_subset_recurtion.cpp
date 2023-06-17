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

vector<int> num;
void subSet(int i, vector<int> &sub)
{
    if (num.size() == i)
    {
        for (int j = 0; j < sub.size(); j++)
        {
            cout << sub[j] << " ";
        }
        cout << endl;
        return;
    }

    subSet(i + 1, sub);
    sub.push_back(num[i]);
    subSet(i + 1, sub);
    sub.pop_back();
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }
    vector<int> s;
    subSet(0, s);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}