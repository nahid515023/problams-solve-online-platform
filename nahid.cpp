#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    int ar[n];
    for (int i = 1; i <= n; i++)
        ar[i - 1] = i;
    int tot = n * (n + 1) / 2;

    do
    {
        int sum = 0;
        int t = tot;
        for (int i = 0; i < n; i++)
        {
            sum += ar[i];
            t -= ar[i];
            if (sum == t)
            {
                for (int k = 0; k < n; k++)
                {
                    cout << ar[k] << " ";
                    if (k == i)
                        cout << endl;
                }
                cout << endl;
                cout << endl;
                break;
            }
        }
    } while (next_permutation(ar, ar + n));
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