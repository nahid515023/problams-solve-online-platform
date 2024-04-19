#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 5, 0), b(n + 5, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x]++;
    }
    multiset<int> ms1, ms2;
    set<int> st;
    k = k * 2;
    for (int i = 1; i <= n && k > 0; i++)
    {
        if (a[i] == 1 && b[i] == 1)
        {
            ms1.insert(i);
            ms2.insert(i);
            st.insert(i);
            k--;
        }
    }
    if (k > 0)
    {
        set<int> x1, x2;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 2)
            {
                x1.insert(i);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (b[i] == 2)
            {
                x2.insert(i);
            }
        }

        while (k > 0)
        {
            if (k == 1)
            {
                ms1.erase(ms1.find(*st.begin()));
                ms2.erase(ms2.find(*st.begin()));
                st.erase(st.begin());
                k++;
            }
            ms1.insert(*x1.begin());
            ms1.insert(*x1.begin());
            ms2.insert(*x2.begin());
            ms2.insert(*x2.begin());
            k -= 2;
            x1.erase(x1.begin());
            x2.erase(x2.begin());
        }
    }

    for (auto xx : ms1)
        cout << xx << " ";
    cout << endl;
    for (auto xx : ms2)
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