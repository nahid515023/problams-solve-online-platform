#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    multiset<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.insert(x);
    }

    int ans = 0;
    int aa = 0;
    int b = *v.begin();
    v.erase(v.begin());

    while (!v.empty())
    {
        int x = *v.begin();
        v.erase(v.begin());
        if (abs(x - b) <= k)
        {
            aa++;
            b = x;
        }
        else
        {
            b = x;
            ans = max(aa + 1, ans);
            aa = 0;
        }
    }
    ans = max(aa + 1, ans);
    cout << n - ans << endl;
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