#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    queue<char> q;
    for (int i = 0; i < n; i++)
    {
        q.push(s[i]);
    }

    char ch = q.front();
    q.pop();

    while (!q.empty())
    {
        char c = q.front();
        q.pop();
        if (c == ch)
        {
            cout << ch;
            if (q.size() > 0)
            {
                ch = q.front();
                q.pop();
            }
        }
    }
    cout<<endl;
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