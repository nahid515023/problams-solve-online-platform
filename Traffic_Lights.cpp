#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    set<int> st;
    multiset<int> ms;
    ms.insert(n);
    st.insert(0);
    st.insert(n);
    for (auto &x : v)
    {
        cin >> x;
        if (x == 0 || n == 0)
        {
            cout << *ms.rbegin() << " ";
            continue;
        }
        auto it1 = st.lower_bound(x);
        auto it2 = --st.lower_bound(x);
        int val = *it1 - *it2;
        ms.erase(ms.find(val));
        ms.insert(*it1 - x);
        ms.insert(x - *it2);
        st.insert(x);
        cout << *ms.rbegin() << " ";
    }
    cout << endl;
}

int main()
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