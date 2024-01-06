#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s[3];
    for (int i = 0; i < 3; i++)
        cin >> s[i];
    int x = 0, y = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i][j] == '?')
            {
                x = i;
                y = j;
            }
        }
    }

    set<char> st;

    for (int i = 0; i < 3; i++)
    {
        st.insert(s[x][i]);
        st.insert(s[i][y]);
    }

    if (st.find('A') == st.end())
    {
        cout << 'A' << endl;
        return;
    }
    if (st.find('B') == st.end())
    {
        cout << 'B' << endl;
        return;
    }
    if (st.find('C') == st.end())
    {
        cout << 'C' << endl;
        return;
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