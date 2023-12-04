#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    multiset<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        auto it = st.upper_bound(a);
        if (it == st.end())
        {
            ans++;
        }
        else
        {
            st.erase(it);
        }
        st.insert(a);
    }
    cout << ans << endl;
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