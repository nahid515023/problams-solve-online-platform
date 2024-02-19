#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    set<int> st;
    for (int i = 1; i <= n; i += 1)
    {
        cout << "Round " << i << ": ";
        for (int j = 1; j * i <= n; j += 2)
        {
            if (st.find(i * j) == st.end())
            {
                st.insert(i * j);
                cout << i * j << " ";
            }
        }
        cout << endl;
    }
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