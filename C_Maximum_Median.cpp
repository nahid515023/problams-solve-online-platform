#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int mid = v[n / 2];
    int cnt = 0;
    for (int i = n / 2; i < n; i++)
    {
        if (mid == v[i])
        {
            cnt++;
        }
        else
        {
            int nd = v[i] - mid;
            if (nd*cnt <= k)
            {
                mid += nd;
                k -= nd*cnt;
                cnt++;
            }
            else
            {
                break;
            }
        }
    }
    mid += (k / cnt);
    cout << mid << endl;
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