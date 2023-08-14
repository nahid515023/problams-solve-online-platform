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
    sort(v.begin(), v.end());
    vector<int> a;
    int i = n - 2;
    a.push_back(v.back());
    int x = v.back();
    v.pop_back();
    while (i >= 0 && x == v[i])
    {
        a.push_back(v[i]);
        v.pop_back();
        i--;
    }
    if (v.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << v.size() << " " << a.size() << endl;
    for (auto &xx : v)
        cout << xx << " ";
    cout << endl;
    for (auto &xx : a)
        cout << xx << " ";
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