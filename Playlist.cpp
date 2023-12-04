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

    int l = 0, r = 0;

    set<int> st;
    int cnt = 0;
    int ans = 0;

    while (l < n && r < n)
    {
        if (st.count(v[r]) == 1)
        {
            while (l < r)
            {
                if (v[l] == v[r])
                {
                    st.erase(v[l]);
                    cnt--;
                    l++;
                    break;
                }
                st.erase(v[l]);
                l++;
                cnt--;
            }
            st.insert(v[r]);
            r++;
            cnt++;
        }
        else
        {
            st.insert(v[r]);
            cnt++;
            r++;
        }
        ans = max(ans, cnt);
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