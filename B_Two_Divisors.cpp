#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = lcm(x, y);
        if (ans == y)
        {
            ans = ans * (ans / x);
        }
        cout << ans << endl;
    }
    return 0;
}