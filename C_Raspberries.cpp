#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        ans *= a;
    }

    if (ans % k == 0)
    {
        cout << 0 << endl;
        return;
    }

    int mi = 1e9;
    for (int i = 0; i < n; i++)
    {
        mi = min(mi, k - (v[i] % k));
    }

    if (k == 4)
    {
        mi = 2;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
                cnt++;
        }
        if (cnt % 2 == 1)
        {
            mi = mi - 1;
        }
        else
        {
            mi = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 4 == 3)
            {
                mi = 1;
            }
        }
    }
    cout << mi << endl;
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