#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    set<int> st;
    map<int, int> mp;
    queue<int> q;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
        q.push(a);
        mp[a]++;
        while (st.size() > k)
        {
            mp[q.front()]--;
            if (mp[q.front()] == 0)
            {
                st.erase(q.front());
            }
            q.pop();
        }
        ans += q.size();
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