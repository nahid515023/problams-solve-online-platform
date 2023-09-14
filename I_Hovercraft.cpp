#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    double l, w;
    while (cin >> l, cin >> w)
    {
        if (l == 0 && w == 0)
            break;

        double ans = l + w;

        double b = l / 2, e = l;
        int x = 0;
        while (b < e)
        {
            double d = (b + e) / 2;
            double x = l - d;
            double y = sqrt(d * d + x * x);
            double v = l + w - (x + y - d);
            if (ans > v)
            {
                ans = v;
                b = d;
            }
            else
            {
                e = d - .0001;
            }
        }
        cout << ans << endl;
    }
    return 0;
}