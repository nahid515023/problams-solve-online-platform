#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0;

    while (i < v.size())
    {
        if (is_sorted(v.begin(), v.end()))
        {
            cout << "YES" << endl;
            return;
        }
        if (v[i] >= 10)
        {
            int x = v[i] % 10;
            int y = v[i] / 10;
            v.erase(v.begin() + i);
            v.insert(v.begin() + i, y);
            v.insert(v.begin() + i + 1, x);
        }
        i++;
    }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}