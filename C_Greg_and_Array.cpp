#include <bits/stdc++.h>
using namespace std;
#define int long long
const int nn=100000+7;
int a[nn],l[nn],r[nn],val[nn],d[nn],b[nn];

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

  
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
   
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        val[x]++;
        val[y + 1]--;
    }
    int s = 0;
    for (int i = 1; i <= m; i++)
    {
        s += val[i];
        b[l[i]] += s * d[i];
        b[r[i] + 1] -= s * d[i];
    }
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += b[i];
        cout << s + a[i] << " ";            
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