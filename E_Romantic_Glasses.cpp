#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int x = 0, y = 0;
    set<int> st;

    for (int i = 1; i <= n; i += 1)
    {
        if (i % 2 == 0)
        {
            y += v[i];
        }
        else
        {
            x += v[i];
        }

        if (st.find(x - y) != st.end() || x == y)
        {
            cout << "YES" << endl;
            return;
        }
        st.insert(x - y);
    }
    cout << "NO" << endl;
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