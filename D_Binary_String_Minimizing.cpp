#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            st.insert(i);
        }
    }

    int pos = 0;

    while (k > 0 && !st.empty())
    {
        int x = *st.begin();
        st.erase(st.begin());
        if (pos == x)
        {
            pos++;
            continue;
        }

        int v = x - pos;

        if (k > v)
        {
            s[pos] = '0';
            s[x] = '1';
            k -= v;
            pos++;
        }
        else
        {
            s[x - k] = '0';
            s[x] = '1';
            k -= k;
            pos++;
        }
    }
    cout << s << endl;
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