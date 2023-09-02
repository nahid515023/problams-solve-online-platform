#include <bits/stdc++.h>
using namespace std;
#define int long long

multiset<pair<int, int>> v;

int f(int x)
{
    auto it = v.find(x);
    if (it != v.end())
    {
        for (;it<v.end() && ;it++)
        {
            if()
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.insert({x, i});
    }

    for (auto [x, y] : v)
    {
        cout << x << " " << y << endl;
    }

    while (!v.empty())
    {
        int[x, y] = v.begin();
        v.erase(v.begin());
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}