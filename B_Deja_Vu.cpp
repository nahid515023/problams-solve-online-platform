#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    int pw[k];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < k; i++)
        cin >> pw[i];

    int pow = 35;
    

    for (int i = 0; i < k; i++)
    {
        if (pow > pw[i])
        {
            pow = pw[i];
            for (int j = 0; j < n; j++)
            {
                if (ar[j] % (1 << pw[i]) == 0)
                {
                    ar[j] += 1 << (pw[i] - 1);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
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