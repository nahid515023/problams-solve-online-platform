#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    set<int> st;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i <= n; i++)
    {
        st.insert(i);
    }

    for (auto [x, y] : mp)
    {
        if (x != *st.begin())
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            if (y < 2)
            {
                cout << "NO" << endl;
                return;
            }
            st.erase(*st.begin());
        }
    }
    cout << "YES" << endl;
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