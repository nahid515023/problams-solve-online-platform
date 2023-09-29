#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = a * 2 + b * 2;
    int y = a + b * 2;
    if (c > y || c + 1 > x)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int32_t main()
{

    int t = 1;
    cin >> t;
    int i = 0;
    while (t--)
    {
        printf("Case #%lld: ", ++i);
        solve();
    }
    return 0;
}