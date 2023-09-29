#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i+3;
    do
    {
        int a = 0, b = 0;
        for (int i = 0; i < n; i += 2)
        {
            a ^= v[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            a ^= v[i];
        }
        if (a == b)
        {
            for (auto &x : v)
                cout << x << " ";
            cout << endl;
        }
    } while (next_permutation(v.begin(), v.end()));
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