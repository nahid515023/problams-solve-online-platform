#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    map<char, int> mp;
    mp['A'] = 1;
    mp['B'] = 10;
    mp['C'] = 100;
    mp['D'] = 1000;
    mp['E'] = 10000;
    string s;
    cin >> s;
    bool ok = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'E')
        {
            ok = 1;
            break;
        }
    }

    int i = 0;
    char mx = s[0];
    int inx = 0;
    while (s[i] != 'E' && i < s.size())
    {
        if (s[i] > mx)
        {
            inx = i;
        }
        i++;
    }
    if (i == s.size() && s[s.size() - 1] != 'E')
    {
        s[0] = 'E';
    }
    else
        s[inx] = 'E';

//    cout<<s<<endl;
    map<char, int> ck;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (ck[s[i]] > 0)
        {
            continue;
        }
        ck[s[i]] = i;
    }

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int vl = mp[s[i]];

        for (auto [x, y] : ck)
        {
            if (s[i] < x && y > i)
            {
                vl = 0;
                break;
            }
        }
        // cout<<s[i]<<" "<<vl<<endl;
        if (vl == 0)
        {
            ans -= mp[s[i]];
        }
        else
            ans += vl;
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