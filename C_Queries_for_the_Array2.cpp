#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int p = 0;
    int pos = -1;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            p++;
            v.push_back()
        }
        else if (s[i] == '-')
        {
            p--;
            if (pos > 0)
                pos--;
        }
        else
        {
            if (p <= 0)
            {
                cout << "NO" << endl;
                return;
            }
            if (p <= 1 && s[i] == '0')
            {
                cout << "NO" << endl;
                return;
            }

            if (pos > 0)
            {
                if (ck != s[i])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            if (ck != s[i])
                pos = 1;
            ck = s[i];
        }
    }
    cout << "YES" << endl;
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