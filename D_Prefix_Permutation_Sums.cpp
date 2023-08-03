#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        bool ok = 0;
        int n;
        cin >> n;
        vector<int> aa(n);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> aa[i];
        }

        set<int> st;
        for (int i = 1; i <= n; i++)
            st.insert(i);

        int prv = 0;

        vector<int> v;

        for (int i = 0; i < n - 1; i++)
        {
            prv = aa[i] - prv;
            if (st.count(prv))
            {
                st.erase(prv);
            }
            else
            {
                v.push_back(prv);
            }
            prv = aa[i];
        }
        if (v.size() > 1)
        {
            cout << "NO" << endl;
            ok = 1;
        }
        if (v.size() == 1)
        {
            int s = 0;
            for (int x : st)
            {
                s += x;
            }
            if (s != v[0])
            {
                cout << "NO" << endl;
                ok = 1;

            }
        }
        if (!ok)
            cout << "YES" << endl;
    }
    return 0;
}