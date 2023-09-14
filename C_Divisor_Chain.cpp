#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int i = 1;
    while (i < n)
    {
        v.push_back(i);
        if (i + i > n)
            break;
        i += i;
    }
    int d = n - i;
    int ls = v.back();
    for (int i = 31; i >= 0; i--)
    {
        if (d & 1 << i)
        {
            ls += (1 << i);
            v.push_back(ls);
        }
    }
    if (v.back() != n)
    {
        v.push_back(n);
    }
    reverse(v.begin(), v.end());

    cout << v.size() << endl;
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}