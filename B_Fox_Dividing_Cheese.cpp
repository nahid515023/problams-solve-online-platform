#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int a, b;
    cin >> a >> b;
    int ar[] = {2, 3, 5};
    vector<int> v(6, 0), u(6, 0);
    for (int i = 0; i < 3; i++)
    {
        while (a % ar[i] == 0)
        {
            a /= ar[i];
            v[ar[i]]++;
        }
        while (b % ar[i] == 0)
        {
            b /= ar[i];
            u[ar[i]]++;
        }
    }
    if (a != b)
    {
        cout << -1 << endl;
        return;
    }

    int ans = abs(v[2] - u[2]) + abs(v[3] - u[3]) + abs(v[5] - u[5]);
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}