#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            a.push_back('1');
            b.push_back('1');
        }
        else
        {
            a.push_back('0');
            b.push_back('0');
        }
    }
    vector<tuple<int, int, int>> aa, bb;
    for (int i = 0; i < n; i++)
    {
        aa.push_back({x[i], i, 1});
        aa.push_back({y[i], i, 2});
    }

    sort(aa.begin(), aa.end());

    for (int i = 0; i < n; i++)
    {
        if (get<2>(aa[i]) == 2)
        {
            a[get<1>(aa[i])] = '1';
        }
        else
        {
            b[get<1>(aa[i])] = '1';
        }
    }
    cout << b << endl;
    cout << a << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}