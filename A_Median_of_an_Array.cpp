#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n+3];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    sort(ar+1, ar + n+1);
    int cnt = 0;
    for (int i = (n + 1) / 2; i <= n; i++)
    {
        if (ar[i] == ar[(n + 1) / 2])
            cnt++;
    }
    cout<<cnt<<endl;
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