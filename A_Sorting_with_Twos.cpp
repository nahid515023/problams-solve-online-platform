#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    int last = 4;
    for (int i = 2; (1 << i) <= n; i++)
    {
        int x = 1 << i;
        last = x;
        for (int k = x; k > (x / 2) + 1; k--)
        {
            if (ar[k] < ar[k - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    for (int k = last+1; k < n && n>2; k++)
    {
        if (ar[k] > ar[k + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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