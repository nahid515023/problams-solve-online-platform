#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> st;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (*st.begin() == i && st.size() > 0)
        {
            ans += (n - i)+1;
            st.erase(st.begin());
        }
        else
        {
            if (st.size() > 0)
                ans += (n - *st.begin())+1;
        }
    }
    cout<<ans<<endl;
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