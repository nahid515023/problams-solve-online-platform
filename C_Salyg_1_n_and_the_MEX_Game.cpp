#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int mex = n;
    for (int i = 0; i < n; i++)
    {
        if (i != v[i])
        {
            mex = i;
            break;
        }
    }

    int a = mex;
    cout << a << endl;
    while (1)
    {
        cout << endl;
        cin >> a;
        if (a == -1)
            break;
        cout << a << endl;
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