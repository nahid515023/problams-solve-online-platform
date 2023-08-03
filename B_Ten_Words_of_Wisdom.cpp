#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v, a;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
        if (x <= 10)
            v.push_back({x, y});
    }
    sort(v.rbegin(), v.rend());
    int val = v[0].second;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second > val)
        {
            val = v[i].second;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].second==val)
        {
            cout<<i+1<<endl;
            return;
        }
    }
    // cout << val << endl;
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