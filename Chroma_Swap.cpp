#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<int, multiset<int>> mp;
    int a[n], b[n], c1[n], c2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c2[i];
    }

    for (int i = 0; i < n; i++)
    {
        mp[c2[i]].insert(b[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (mp.find(c1[i]) != mp.end())
    //         mp[c1[i]].insert(a[i]);
    // }

    int prev = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(c1[i]) != mp.end())
        {
            auto it = mp[c1[i]].lower_bound(prev);
            if(it==mp[c1[i]].end()) continue;
            a[i]=*it;
            mp[c1[i]].erase(it);
        }
        prev = a[i];
    }

    if (is_sorted(a, a + n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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