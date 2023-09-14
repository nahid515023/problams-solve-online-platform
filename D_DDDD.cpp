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
        int a;
        cin >> a;
        v[i] = a;
    }
    if (n == 1)
    {
        cout << "yes" << endl;
        return;
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
    {
        int d = v[i] - v[i - 1];
        if (d % 2 != 0)
        {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
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