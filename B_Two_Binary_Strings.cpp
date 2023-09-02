#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string a, b;
    cin >> a >> b;
    int x = 0;
    int y = a.size() - 1;
    set<int> v1, v2;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i] && a[i] == '0')
        {
            x = i;
            v1.insert(x);
        }
    }
    for (int i = a.size()-1; i > 0; i--)
    {
        if (a[i] == b[i] && a[i] == '1')
        {
            y = i;
            v2.insert(i);
        }
    }
    for (auto aa : v1)
    {
        if (v2.find(aa + 1) != v2.end())
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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