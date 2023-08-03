#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    int ar[n + 5];
    ar[0] = 0, ar[1] = 1;
    int cnt = 2;

    for (int i = 2; i <= n; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2];
        if (ar[i - 1] >= 1e9)
            break;
        cnt++;
    }
    cout<<cnt<<endl;
    for (int i = 0; i <= cnt; i++)
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}