#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string v;
    cin >> v;

    if (v.size() < 3)
    {
        cout << 0 << endl;
        return;
    }

    int ans = 0;

    for (int i = 0; i < v.size() - 2; i++)
    {
        if (i < v.size() - 4)
        {
            if (v[i] == 'm' && v[i + 1] == 'a' && v[i + 2] == 'p' && v[i + 3] == 'i' && v[i + 4] == 'e')
            {

                ans += 1;
                i += 4;
                continue;
            }
        }
        if (v[i] == 'm' && v[i + 1] == 'a' && v[i + 2] == 'p')
        {
            ans += 1;
            i += 2;
        }
        else if (v[i] == 'p' && v[i + 1] == 'i' && v[i + 2] == 'e')
        {
            ans += 1;
            i += 2;
        }
    }
    cout << ans << endl;
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