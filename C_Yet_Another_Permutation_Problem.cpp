#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }
    do
    {
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            // cout<<v[i]<<" ";
            int d = __gcd(v[i], v[(i % (n - 1)) + 1]);
            st.insert(d);
        }
        if (st.size() >= 5)
        {
            cout << st.size() << endl;
            for (auto &x : v)
                cout << x << " ";
            cout << endl;
        }
    } while (next_permutation(v.begin(), v.end()));
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