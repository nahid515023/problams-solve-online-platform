#include <bits/stdc++.h>
using namespace std;
#define int long long

int nCr(int n, int r)
{
    int t = 1, p = 1, q = 1;
    for (int i = 1; i <= n; i++)
    {
        t *= i;
    }
    for (int i = 1; i <= r; i++)
    {
        p *= i;
    }
    for (int i = 1; i <= n - r; i++)
    {
        q *= i;
    }
    int val = (t / p) / q;
    return val;
}

void solve()
{
    string s;
    int n;
    cin >> s >> n;
    set<char> st;
    for (char x : s)
    {
        st.insert(x);
    }
    int sz = st.size();
    int ans = 0;
    for (auto x : st)
    {
        int a = x - 'a' + 1;
        int ex = 18 - a;
        if (ex == 0)
        {
            continue;
        }
        int aa = nCr(ex, n - 1);
        ans += aa;
    }
    int bb = nCr(sz, n - 1);
    cout << ans+bb-1 << endl;
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