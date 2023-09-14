#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }

    int l = 0, h = 1e9;

    while (l <= h)
    {
        int m = (l + h) / 2;

        priority_queue<pair<int, int>, greater<pair<int, int>>()> pq;
        vector<int> ar = v;
        int i = 0;
        while (i < n)
        {
            if (ar[i] > m)
            {
                int d = i - r[i];
                int val = ar[i] - m;
                pq.push({d, val});
            }
            else if(ar[i]<m)
            {
                int [x,y]=pq.top();
                pq.pop();
                int aa = 
            }
        }

        if (mx > m)
        {
            l = m;
        }
        if (mx < m)
        {
            h = m - 1;
        }
    }
    cout << l << endl;
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