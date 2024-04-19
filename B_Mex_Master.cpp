#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int zero = 0, other = 0, one = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
            zero++;
        else
            other++;

        if (a == 1)
            one++;
    }

    if (zero <= other + 1)
    {
        cout << 0 << endl;
    }
    else
    {
        if (other == one && zero != n)
        {
            cout << 2 << endl;
        }
        else
            cout << 1 << endl;
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