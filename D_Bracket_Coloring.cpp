#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }

    int cnt = 0;
    int i = 0;
    int val;
    vector<int> v;
    while (i < n)
    {
        if (s[i] == s[0])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if (cnt > 0)
        {
            val = 1;
        }
        else if (cnt < 0)
        {
            val = 2;
        }
        v.push_back(val);
        i++;
    }
    int cur = v[0];
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (cur != v[i])
        {
            ans = 2;
            break;
        }
    }

    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
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