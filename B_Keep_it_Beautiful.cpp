#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    string s;
    s.push_back('1');
    int l = v[0];
    bool ck = 0;
    for (int i = 1; i < n; i++)
    {
        if (ck == 0 && v[i] >= v[0] && l <= v[i])
        {
            l = v[i];
            s.push_back('1');
        }
        else if (ck == 0 && v[i] <= v[0] && l > v[i])
        {
            ck = 1;
            l = v[i];
            s.push_back('1');
        }
        else if (ck == 1 && v[i] >= l && v[i] <= v[0])
        {
            l = v[i];
            s.push_back('1');
        }
        else{
             s.push_back('0');
        }
    }
    cout << s << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}