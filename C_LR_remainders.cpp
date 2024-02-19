#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int x = 1;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        dq.push_back(a);
    }

    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        int ans = x % m;
        cout << ans << " ";
        if (s[i] == 'L')
        {
            x /= dq.front();
            dq.pop_front();
        }
        else
        {
            x /= dq.back();
            dq.pop_back();
        }
    }
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