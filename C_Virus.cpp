#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, d;
    cin >> n >> d;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        double r = sqrt(a * a + b * b);
        if (d < r)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
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