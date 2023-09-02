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
    vector<int> a;
    a.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            a.push_back(v[i]);
            a.push_back(v[i]);
        }
        else
        {
            a.push_back(v[i]);
        }
    }
    cout << a.size() << endl;
    for (auto &x : a)
        cout << x << " ";
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