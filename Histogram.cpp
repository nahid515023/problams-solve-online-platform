#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    stack<int> sl;
    int l[n + 1];
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        while (!sl.empty() && ar[sl.top()] >= ar[i])
        {
            cnt += l[sl.top()] + 1;
            sl.pop();
        }
        l[i] = cnt;
        sl.push(i);
    }

    stack<int> sr;
    int r[n + 1];
    reverse(ar, ar + n);

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        while (!sr.empty() && ar[sr.top()] >= ar[i])
        {
            cnt += r[sr.top()] + 1;
            sr.pop();
        }
        r[i] = cnt;
        sr.push(i);
    }
    reverse(r, r + n);
    reverse(ar, ar + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val = (l[i] + r[i] + 1) * ar[i];
        ans = max(ans, val);
    }
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    int i = 1;
    while (t--)
    {
        printf("Case %lld: ", i++);
        solve();
    }
    return 0;
}