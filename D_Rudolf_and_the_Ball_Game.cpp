#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    set<int> st;
    st.insert(k);
    while (m--)
    {
        int x;
        char y;
        cin >> x >> y;
        if (y == '0')
        {
            set<int> ns;
            while (!st.empty())
            {
                int a = *st.begin();
                st.erase(a);
                a += x;
                if (a > n)
                {
                    ns.insert(a - n);
                }
                else
                {
                    ns.insert(a);
                }
            }
            st = ns;
        }
        else if (y == '1')
        {
            set<int> ns;
            while (!st.empty())
            {
                int a = *st.begin();
                st.erase(a);
                a -= x;
                if (a > 0)
                {
                    ns.insert(a);
                }
                else
                {
                    ns.insert(a+n);
                }
            }
            st = ns;
        }
        else
        {
            set<int> ns;
            while (!st.empty())
            {
                int a = *st.begin();
                st.erase(a);
                int b = a;
                b += x;
                if (b > n)
                {
                    ns.insert(b - n);
                }
                else
                {
                    ns.insert(b);
                }

                a -= x;
                if (a < 1)
                {
                    ns.insert(a + n);
                }
                else
                {
                    ns.insert(a);
                }
            }
            st = ns;
        }
    }
    cout << st.size() << endl;
    for (auto xx : st)
        cout << xx << " ";
    cout << endl;
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