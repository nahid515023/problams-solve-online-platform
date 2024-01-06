#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int i = 1;
    while (1)
    {
        int x = i * i;
        string s = to_string(x);
        // cout << s << endl;
        if (s.size() > n)
            break;

        set<char> st(s.begin(), s.end());
        if (st.size() == n)
        {
            cout << s << endl;
        }
        i++;
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