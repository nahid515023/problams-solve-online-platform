#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t = 1;
    scanf("%lld", &t);
    while (t--)
    {
        int n;
        scanf("%lld", &n);
        int ans = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (!(n % i))
            {
                ans += 1 + (n / i != i);
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}