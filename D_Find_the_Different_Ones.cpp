#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
   vector<int>ar(n+1,0);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
        ar[i + 1] = st.size();
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (ar[y] - ar[x] > 0)
        {
            int aa = upper_bound(ar.begin()+x,ar.begin()+y+1,ar[x])-ar.begin();
            cout << x << " " << aa << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    cout << endl;
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