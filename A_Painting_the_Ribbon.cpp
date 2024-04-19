#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ar[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ar[i] = cnt % m;
        cnt++;
    }
    sort(ar, ar + n);
    int set = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        k--;
        if (k<0)
            break;
        ar[i] = set;
    }
   
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] != ar[i + 1])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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