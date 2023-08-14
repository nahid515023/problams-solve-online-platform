#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }

    if (n % 4 == 0)
    {
        cout << (n / 4 * 3) << " " << (n / 4 * 5) << endl;
        return;
    }
    if (n % 2 == 0)
    {
        n = n / 2;
        int x = (n * n) / 2;
        int y = (n * n) / 2 + 1;
        cout <<  x * 2 << " " << y * 2 << endl;
        return;
    }
    int x = (n * n) / 2;
    int y = (n * n) / 2 + 1;
    cout  << x << " " << y << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}