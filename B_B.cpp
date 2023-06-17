#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x, s;
    cin >> n >> x >> s;
    int take = x;
    for (int i = 0; i < s; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == take || b == take)
        {
            if (b == take)
            {
                take = a;
            }
            else
            {
                take = b;
            }
        }

        // cout << take << " ";
    }
    // cout<<endl;
    cout << take << endl;
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