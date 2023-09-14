#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;
    int x = __gcd(a, b);
    set<int> st;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            st.insert(i);
            st.insert(x / i);
        }
    }

    int n;
    cin >> n;
    while (n--)
    {
        int l, h;
        cin >> l >> h;
        int val = *--st.upper_bound(h);
        if (val >= l)
        {
            cout << val << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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
    // cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}