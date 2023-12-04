#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = m; i >= 0; i--)
    {
        int x = i;
        vector<int> v;
        v.push_back(x);
        for (int j = n; j > 0; j--)
        {
            x %= j;
            v.push_back(x);
        }
        for(int k = v.size()-1;k>=0;k--)
        {
            cout<<v[k]<<" ";
        }
        cout<<endl;
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