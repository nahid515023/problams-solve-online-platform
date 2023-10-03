#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[1 << n][n];
    memset(ar, 0, sizeof(ar));
    int cnt = 0;
    int a = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        int x = 0;
        int r = 0;
        int b = 0;
        cnt = 1 << a;
        for (int j = 0; j < (1 << n); j++)
        {
            ar[j][i] = x;
            r++;
            b++;
            if (cnt == r)
            {
                r = 0;
                if (x == 0)
                    x = 1;
                else
                    x = 0;
            }
            if (b == (1 << (a + 1)))
            {
                if (x == 0)
                    x = 1;
                else
                    x = 0;
                b=0;
            }
        }
        a++;
    }

    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ar[i][j];
        }
        cout << endl;
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