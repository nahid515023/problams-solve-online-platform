#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ar[30] = {0};
    for (int i = 0; i < 30; i++)
        ar[i] = 0;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            ar[s[i] - 'a']++;
        }
        else
        {
            if (ar[tolower(s[i]) - 'a'] == 0)
            {
                ans++;
            }
            else
            {
                ar[tolower(s[i]) - 'a']--;
            }
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}