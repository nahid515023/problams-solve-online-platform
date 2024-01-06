#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e')
        {
            v.push_back(i);
        }
    }

    for (int i = 0; i < v.size()-1; i++)
    {
        if (i + 1 <= v.size() && (v[i + 1] - v[i]) == 3)
        {
            cout << s[v[i] - 1];
            cout << s[v[i]];
            cout << s[v[i] + 1];
            cout << '.';
        }
        else
        {
            cout << s[v[i] - 1];
            cout << s[v[i]];
            cout << '.';
        }
    }
    int i = v.back() - 1;
    cout << s[i] << s[i + 1];
    if (i + 2 < s.size())
    {
        cout << s[i + 2];
    }

    cout << endl;
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