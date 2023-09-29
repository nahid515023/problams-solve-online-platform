#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c < a && c < b)
    {
        cout << 0 << endl;
        return;
    }
    if (a * 2 < b)
    {
        cout << c / a << endl;
    }
    else
    {
        int ans = (c / b) * 2;
        c -= (c / b) * b;
        if (c >= a)
        {
            ans += (c / a);
        }
        else
        {
            ans--;
        }
        cout << ans << endl;
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