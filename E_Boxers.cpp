#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.find(v[i] - 1) == st.end() && v[i] - 1 > 0)
        {
            st.insert(v[i] - 1);
        }
        else if (st.find(v[i]) == st.end())
        {
            st.insert(v[i]);
        }
        else if (st.find(v[i] + 1) == st.end())
        {
            st.insert(v[i] + 1);
        }
    }
    cout << st.size() << endl;
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