#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int x = n - k;
    vector<int> v;
    for (; x <= n; x++)
        v.push_back(x);
    for (int i = n - k - 1; i > 0; i--)
        v.push_back(i);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
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