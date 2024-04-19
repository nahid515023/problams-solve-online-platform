#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }

    int one = 0;
    int i = 0;
    for (i = 0; i <= n; i++)
    {
        if (v[i] == 0)
            break;

        if (v[i] == 1)
            one++;
        if (one == 2)
        {
            break;
        }
    }
    cout << i << endl;
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