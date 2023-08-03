#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int ar[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            int d = abs(ar[i] - H);
            if (d % k == 0 && d <= (k * (m - 1)) && d > 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}