#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            sum += i;
            int mx = n - i - 1;
            if (mx > i)
            {
                pq.push({mx, i});
            }
        }
        if (s[i] == 'R')
        {
            sum += (n - i - 1);
            int mx = n - i - 1;
            if (mx < i)
            {
                pq.push({i, mx});
            }
        }
    }
    int cnt = 0;
    while (!pq.empty())
    {
        auto [x, y] = pq.top();
        pq.pop();
        sum += (x - y);
        cout << sum << " ";
        cnt++;
    }
    for (int i = cnt; i < n; i++)
        cout << sum << " ";
    cout << endl;
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