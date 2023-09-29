#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string c[] = {"blue",
                  "green",
                  "yellow",
                  "red",
                  "purple",
                  "orange",
                  "pink",
                  "grey",
                  "cyan",
                  "brown",
                  "ash",
                  "silver",
                  "gold",
                  "white",
                  "black"};
    string s;
    cin >> s;
    map<char, int> mp, mp2;
    for (char ch : s)
    {
        mp[ch]++;
        mp2[ch]++;
    }

    int ans = 0;

    for (int k = 0; k < 15; k++)
    {
        int cnt = 0;
        mp = mp2;
        for (int i = k; i < 15; i++)
        {
            bool ok = 1;
            for (int ch : c[i])
            {
                if (mp[ch] <= 0)
                {
                    ok = 0;
                    break;
                }
            }
            if (ok == 0)
                continue;
            cnt++;
            for (int ch : c[i])
            {
                mp[ch]--;
            }
        }
        ans = max(cnt, ans);
    }
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}