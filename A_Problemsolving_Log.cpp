#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ch(26, 0);
    for (char &c : s)
    {
        ch[c - 'A']++;
    }

    int cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        if (ch[i] > i)
            cnt++;
        // cout<<ch[i]<<" ";
    }
    cout << cnt << endl;
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