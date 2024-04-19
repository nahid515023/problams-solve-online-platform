#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    vector<int> v;
    for (int i = 1; i <= 32; i++)
    {
        bitset<6> bt(i);
        int a = stol(bt.to_string());
        v.push_back(a);
        // cout << a << endl;
    }

    int n;
    cin >> n;
    reverse(v.begin(), v.end());
    int prv = -1;
    while (n > 0 && prv != n)
    {
        prv = n;
        for (int i = 0; i < v.size(); i++)
        {
            if (n % v[i] == 0)
            {
                n = n / v[i];
            }
        }
    }
    // cout << n << endl;
    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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