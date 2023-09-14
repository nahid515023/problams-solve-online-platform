#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    st.push(1);
    int neg = 0, pos = 1;
    for (char ch : s)
    {
        if (ch == '+')
        {
            if (st.top() == '-')
            {
                st.pop();
                neg--;
            }
            else
            {
                st.push(ch);
                pos++;
            }
        }
        else if (ch == '-')
        {
            if (st.top() == '-')
            {
                st.push(ch);
                neg++;
            }
            else
            {
                st.pop();
                pos--;
            }
        }
        else
        {
            if (ch == '1' && neg > 0)
            {
                cout << "NO" << endl;
                return;
            }
            else if (ch == '0' && neg == 0 && pos > neg)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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