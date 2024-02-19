#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    do
    {
        int x = v[0] + v[1] + v[2];
        int y = v[3] + v[4] + v[5];
        if (x == y)
        {
            cout << "YES" << endl;
            return;
        }
    } while (next_permutation(v.begin(), v.end()));
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}