#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int tot = 0;
    for (int &x : v)
    {
        cin >> x;
        tot += x;
    }

    int x = tot / n;
    if (tot % n != 0)
    {
        cout << "NO" << endl;
        return;
    }
    int ex = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < x)
        {
            if (v[i] + ex < x)
            {
                cout << "NO" << endl;
                return;
            }
            ex -= (x - v[i]);
        }
        else
        {
            ex += (v[i] - x);
        }
    }
    cout << "YES" << endl;
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