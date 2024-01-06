#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i] + b[i], a[i], b[i]});
    }
    sort(v.rbegin(), v.rend());

    int x = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            x += (v[i][1]-1);
        }
        else
        {
            y += (v[i][2]-1);
        }
    }

    cout<<x-y<<endl;
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