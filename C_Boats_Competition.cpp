#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    vector<vector<int>> ar;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ar[i].push_back(v[i] + v[j]);
            ar[j].push_back(v[i] + v[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ar[i][j]<<" ";
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