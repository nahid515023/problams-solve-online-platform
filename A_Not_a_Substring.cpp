#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
using namespace __gnu_pbds;
using namespace std;
template <class T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
#define int long long

void solve()
{
    string st;
    cin >> st;
    string x, y;
    for (int i = 0; i < st.size(); i++)
    {
        x += '(';
        x += ')';
    }
    for (int i = 0; i < st.size() * 2; i++)
    {
        if (st.size() > i)
            y += '(';
        else
            y += ')';
    }

    bool ok = 1;





    for (int i = 0; i < st.size(); i++)
    {
        string a = x.substr(i, st.size());
        if (a == st)
        {
            ok = 0;
            break;
        }
    }

    if (ok == 1)
    {
        cout << "YES\n";
        cout << x << endl;
        return;
    }

    bool f = 1;


    for (int i = 0; i < st.size(); i++)
    {
        string a = y.substr(i, st.size());
        if (a == st)
        {
            f = 0;
            break;
        }
    }
    if (f == 1)
    {
        cout << "YES\n";
        cout << y << endl;
        return;
    }

    cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}