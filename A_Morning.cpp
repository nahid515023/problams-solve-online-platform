#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int ans = 4;
    int x = 0;
    int val = x;
    int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 4; i++)
    {
        int a = s[i] - '0';
        if (a == 0)
            a = 10;
        while (ar[x] != a)
        {
            if (ar[x] > a)
            {
                x--;
            }
            else if (ar[x] < a)
            {
                x++;
            }
            ans += 1;
        }
    }
    cout << ans << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}