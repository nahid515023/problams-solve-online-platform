#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    deque<int> a(n), b(m);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int ans = 0;
    int i = 0;

    while (i < n)
    {
        int x = abs(a.front() - b.front());
        int y = abs(b.back() - a.back());
        if (x < y)
        {
            ans += y;
            a.pop_back();
            b.pop_back();
        }
        else
        {
            ans += x;
            a.pop_front();
            b.pop_front();
        }
        i++;
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