#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }

    sort(v.rbegin(), v.rend());

    vector<int> b(n, 0);

    int i = 0;
    int x = 1;
    while (i < n)
    {
        b[v[i].second] = x;
        i++;
        x++;
    }

    for (i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
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