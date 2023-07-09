#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        vector<int> v(m);
        for (auto &x : v)
            cin >> x;
        sort(v.begin(), v.end());
        int cnt = 0;
        int pln = 0;
        int tm = 0;
        for (int j = 0; j < m; j++)
        {
            if (tm + v[j] <= h)
            {
                tm += v[j];
                pln += tm;
                cnt++;
            }
            else
            {
                break;
            }
        }
        if (i == 0)
        {
            a = cnt;
            b = pln;
            c = 1;
        }
        else
        {
            if (a < cnt)
            {
                c++;
            }
            else if (a == cnt && b > pln)
            {
                c++;
            }
        }
    }
    cout << c << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}