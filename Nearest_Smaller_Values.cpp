#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top().first >= ar[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << st.top().second << " ";
        }
        st.push({ar[i], i+1});
    }
    cout << endl;
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