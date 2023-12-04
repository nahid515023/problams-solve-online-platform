#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int mx = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        mx = max(sum, mx);
        if (sum < 0)
            sum = 0;
    }
    cout<<mx<<endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}