#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(int x)
{
    int i = 1;
    int a = 1;
    while (!(x & a))
    {
        a = 1 << i;
        i++;
    }
    return a;
}

void solve()
{
    int s, n;
    cin >> s >> n;
    vector<int> v;
    int sum = 0;
    while (n > 0 && sum != s)
    {
        int x = f(n);
        if (sum + x <= s)
        {
            v.push_back(n);
            sum += x;
        }
        n--;
    }
    if (sum == s)
    {
        cout << v.size() << endl;
        for (auto &x : v)
            cout << x << " ";
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}