#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }
    int ans = 0;
    int x = 0;
    while (!ms.empty() && ms.size() > 1)
    {
        int v = *ms.begin();
        ms.erase(ms.begin());

        if (!ms.empty() && *ms.rbegin() <= x + v)
        {
            int aa = (x + v) - *ms.rbegin();
            ans += (*ms.rbegin() - x) + 1;
            ms.erase(ms.find(*ms.rbegin()));
            if (aa != 0)
                ms.insert(aa);
            x = 0;
        }
        else
        {
            x += v;
            ans += v;
        }
    }
    // 4 3
    if (!ms.empty())
    {
        int aa = 0;
        if (x > 0)
        {
            ans += 1;
            ans += ((*ms.begin() - x + 1) / 2);
        }
        else
        {
            if (*ms.begin() > 1)
                ans += (*ms.begin() + 1) / 2;
            ans += 1;
        }
    }

    cout << ans << endl;
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