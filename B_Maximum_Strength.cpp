#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string l, r;
    cin >> l >> r;
    if (l.size() < r.size())
    {
        int ans = r[0] - '0' + (9 * (r.size() - 1));
        cout << ans << endl;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < l.size(); i++)
        {
            if (l[i] != r[i])
            {
                ans = abs((l[i] - '0') - (r[i] - '0'));
                ans+=(l.size()-i-1)*9;
                break;
            }
        }
        cout<<ans<<endl;
    }
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