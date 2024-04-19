#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m+5,0);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int seg=((v[i]-cnt-1)/k+1)*k+cnt;
        while (i < m && v[i] <= seg)
        {
            i++;
            cnt++;
        }
        i--;
        ans++;
    }
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}