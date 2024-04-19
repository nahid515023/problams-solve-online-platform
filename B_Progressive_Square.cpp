#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    multiset<int> st;
    for (int i = 0; i < n * n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }

    int curr = *st.begin();
    for (int i = 0; i < n; i++)
    {
        int val = curr;
        for (int j = 0; j < n; j++)
        {
            if (st.count(val))
            {
                st.erase(st.find(val));
                val += d;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        curr += c;
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