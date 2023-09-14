#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    int n = s.size();
    int a[n], b[n];
    int v = 0, u = 0, aa = 1;
    for (int i = 0; i < n; i++)
    {
        v = (v * 10 + s[i] - '0') % x;
        a[i] = v;
        u = (u + (s[n - i - 1] - '0') * aa) % y;
        aa = (10 * aa) % y;
        b[n - i - 1] = u;
    }

    int inx = -1;

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] == b[i] && a[i - 1] == 0 && s[i] != '0')
        {
            inx = i;
            break;
        }
    }
    if (inx == -1)
    {
        cout << "NO" << endl;
        return;
    }

    string l = s.substr(0, inx);
    string r = s.substr(inx, n);
    set<char> st(l.begin(), l.end());
    set<char> st2(r.begin(), r.end());
    if (st.size() == 1 && *st.begin() == '0' || st2.size() == 1 && *st2.begin() == '0')
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << l << endl
         << r << endl;
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