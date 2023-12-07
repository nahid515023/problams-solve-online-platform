#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (int i = 0; i < n; i++)
    {
        cnt[s[i] - 'a']++;
    }

    priority_queue<int> pq;

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > 0)
        {
            pq.push(cnt[i]);
        }
    }

    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        x--;
        y--;

        if (x > 0)
            pq.push(x);
        if (y > 0)
            pq.push(y);
    }
    // cout<<pq.size()<<" ";
    if (pq.size() == 0)
        cout << 0 << endl;
    else
        cout << pq.top() << endl;
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