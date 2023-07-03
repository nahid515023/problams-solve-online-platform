#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    char c[] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n - (n % 7); i++)
    {
        cout << c[i % 7];
    }
    if (n % 7 > 3)
    {
        for (int i = 0; i < n % 7; i++)
        {
            cout << c[i % 7];
        }
    }
    else
    {
        for (int i = 3; i < 3 + n % 7; i++)
        {
            cout << c[i % 7];
        }
    }
    cout << endl;
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