#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> v;
    int aa = 1;
    for (int i = n; i > 1; i--)
    {
        v.push_back(y);
        y -= aa;
        aa++;
    }
    v.push_back(x);
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] >= v[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }

    vector<int> a;
    for (int i = 0; i < n - 1; i++)
    {
        a.push_back(v[i + 1] - v[i]);
    }
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
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