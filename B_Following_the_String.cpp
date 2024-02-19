#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    char a[n + 1];
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] == 0)
        {
            a[i] = 'a' + x;
            x += 1;
            if (x == 26)
                x = 0;
        }
        else
            a[i] = a[ar[i]];
    }
    for (int i = 1; i <= n; i++)
        cout << a[i];
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}