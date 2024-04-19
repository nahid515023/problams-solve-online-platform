#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    map<int, int> b;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b[x]++;
    }

    map<int, int> c;
    int cnt = 0;
    int ans = 0;
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (i < m)
        {
            if (b.find(a[i]) != b.end())
            {
                c[a[i]]++;
                if (c[a[i]] <= b[a[i]])
                {
                    cnt++;
                }
            }
            if (i + 1 == m && cnt >= k)
            {
                ans++;
            }
        }
        else
        {
            if (b.find(a[f]) != b.end())
            {
                c[a[f]]--;
                if (c[a[f]] < b[a[f]])
                    cnt--;
            }
            if (b.find(a[i]) != b.end())
            {
                c[a[i]]++;
                if (c[a[i]] <= b[a[i]])
                {
                    cnt++;
                }
            }
            if (cnt >= k)
            {
                ans++;
            }
            f++;
        }
    }
    cout << ans << endl;
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