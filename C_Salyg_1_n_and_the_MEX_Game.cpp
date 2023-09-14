#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }

    int c = 1;
    int mex = 1;
    for (auto &x : st)
    {
        if (x != c)
        {
            mex = c;
            break;
        }
    }

    int a;
    int xx = 2 * n + 1;
    while (cin >> a && xx > 0)
    {
        xx--;
        if (a == -1)
            break;
        if(a)
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