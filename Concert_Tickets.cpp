#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (!ms.empty())
        {
            auto it = ms.lower_bound(x);
            if (it == ms.end())
            {
                it--;
            }
            if (*it > x && it != ms.begin() && ms.size()>0)
            {
                it--;
                cout << *it << endl;
                ms.erase(it);
            }
            else if (*it <= x)
            {
                cout << *it << endl;
                ms.erase(it);
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
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