#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n + 7);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int mex = 0;
    vector<bool> vis(n + 8, 0);
    for (int i = 0; i < n; i++)
    {
        while (vis[mex] && mex < n)
        {
            mex++;
        }

        if (ar[i] + mex == mex + 1)
        {
            cout << mex << " ";
            vis[mex] = 1;
            mex++;
        }
        else
        {
            if (ar[i] < 0 && mex - ar[i] < n)
            {
                cout << mex - ar[i] << " ";
                vis[mex - ar[i]] = 1;
            }
            else
            {
                cout << mex << " ";
                vis[mex] = 1;
            }
        }
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
