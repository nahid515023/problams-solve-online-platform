#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[n];
    int s1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s1 += a[i];
    }

    int s2 = 0;

    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        s2 += b[i];
    }

    if (s1 == s2)
    {
        cout << "Draw\n";
    }
    else if (s1 < s2)
    {
        cout << "Tenzing\n";
    }
    else
    {
        cout << "Tsondu\n";
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}