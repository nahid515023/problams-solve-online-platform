#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int m, k, a, b;
        cin >> m >> k >> a >> b;

        int x = m / k;
        int v = x * k;
        x -= b;
        int rm = m % k;
        if (a >= rm)
        {
            a -= rm;
            v += rm;
        }
        x = x - (a / k);
        a = a % k;
        if (v == m)
        {
            cout << max(0LL, x) << endl;
        }
        else
        {
            cout << max(0LL, x) + m - v - a << endl;
        }
    }
    return 0;
}