#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        bool ok = 0;
        for (int i = 1; i <= x; i++)
        {
            for (int j = i + 1; j <= x; j++)
            {
                cout << i << " " << j << endl;
                cnt++;
                if (cnt == 2 * x + y)
                {
                    ok = 1;
                    break;
                }
            }
            if (ok)
                break;
        }
    }
    return 0;
}