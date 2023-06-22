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
    vector<int>num;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }

    for(int i=0;i<(1<<n);i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                v.push_back(num[j]);
            }
        }
        for(int j=0;j<v.size();j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
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