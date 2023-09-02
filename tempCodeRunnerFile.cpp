#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<string> v;

int32_t main()
{
    string s;
    int mx = 0;
    while (getline(cin, s))
    {
        mx = max((int)s.size(), mx);
        if (s == "")
        {
            sort(v.begin(), v.end());
            for (auto x : v)
            {
                for (int i = 0; i < (mx - x.size()); i++)
                    cout << ' ';
                reverse(x.begin(), x.end());
                cout << x << endl;
            }
            v.clear();
            mx = 0;
        }
        else
        {
            reverse(s.begin(), s.end());
            v.push_back(s);
        }
    }
    int xx = 1;
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        for (int i = 0; i < (mx - x.size()); i++)
            cout << ' ';
        reverse(x.begin(), x.end());
        cout << x;
        if (xx != v.size())
            cout << endl;
        xx++;
    }
    v.clear();
    mx = 0;
    return 0;
}
