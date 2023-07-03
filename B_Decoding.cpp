#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> dq;
    int i = 0;
    if (n & 1)
    {
        dq.push_back(s[0]);
        i++;
    }
    while (s.size() > i)
    {
        dq.push_front(s[i]);
        dq.push_back(s[i + 1]);
        i += 2;
    }
    while (!dq.empty())
    {
        cout << dq.front();
        dq.pop_front();
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}