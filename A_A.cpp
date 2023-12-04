#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        rotate(t.begin(), t.end(), find(t.begin(),t.end(),s[0]));
        if (t==s)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
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