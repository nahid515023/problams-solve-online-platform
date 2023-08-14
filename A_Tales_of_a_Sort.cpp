#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    if (is_sorted(a.begin(), a.end()))
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        a = b;
        for (int j = 0; j < n; j++)
        {
            a[j] = max(0LL, a[j] - b[i]);
        }
        if (is_sorted(a.begin(), a.end()))
        {
            cout << b[i] << endl;
            return;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}