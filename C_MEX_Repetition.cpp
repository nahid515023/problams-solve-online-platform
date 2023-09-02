#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    int val = 0;
    for (int i = 0; i <= n; i++)
    {
        if (st.count(i) != 1)
        {
            val = i;
            break;
        }
    }

    k = k % (n + 1);
    v.push_back(val);
    rotate(v.begin(), v.begin() + n+1-k, v.end());

    for (int i = 0; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // cout << k << " " << val << endl;
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