#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n + 5];
    ar[0] = 2;
    ar[1] = 3;
    int x = 4;

    for (int i = 2; i < n; i++)
    {
        if ((x * 3) % (ar[i - 2] + ar[i - 1]) == 0)
        {
            ar[i] = x + 1;
            x++;
        }
        else
        {
            ar[i] = x;
        }
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}