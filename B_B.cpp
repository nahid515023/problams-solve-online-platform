#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= k / 2)
        {
            v.push_back(i);
            v.push_back(n);
            n--;
            x = i + 1;
        }
    }
    if (k & 1)
    {
        for (int i = x; i <= n; i++)
        {
            v.push_back(i);
        }
    }
    else
    {
        for (int i = v.back() - 1; i >= x; i--)
        {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}