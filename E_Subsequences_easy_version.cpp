#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    queue<string> q;
    set<string> st;
    q.push(s);
    st.insert(s);
    int ans = 0;
    while (!q.empty() && st.size() < k)
    {
        string a = q.front();
        q.pop();
        for (int i = 0; i < a.size(); i++)
        {
            string b = a;
            b.erase(i, 1);
            if (!st.count(b) && st.size() < k)
            {
                st.insert(b);
                q.push(b);
                ans += (n - b.size());
            }
        }
    }
    if (st.size() < k)
    {
        cout << -1 << endl;
    }
    else
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