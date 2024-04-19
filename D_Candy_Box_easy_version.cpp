#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    priority_queue<int> st;
    for (auto [x, y] : mp)
    {
        st.push(y);
    }
    int s = 0;
    int last = 1e10;
    while (!st.empty() && last > 0)
    {
        if (last > st.top())
        {
            s += st.top();
            last = st.top();
        }
        else if (last == st.top())
        {
            s += --last;
        }
        else if (last < st.top())
        {
            s += --last;
        }
        st.pop();
    }
    cout << s << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}