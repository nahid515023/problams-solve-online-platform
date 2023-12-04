#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int a = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == 'A')
        {
            a++;
        }
        else if (s[i] =='A' && s[i + 1]=='B')
        {
            ans += a;
            swap(s[i],s[i+1]);
            a = 1;
        }
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