#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    string a = s.substr(0, 2);
    char b = s[2];
    string c = s.substr(3, 5);

    if (stoi(a) >= 12)
    {
        if (stoi(a) > 12)
        {
            int d = stoi(a) - 12;
            if(d/10==0){
                cout<<"0";
            }
            cout << stoi(a) - 12 << b << c << " PM\n";
        }
        else
        {
            cout << a << b << c << " PM\n";
        }
    }
    else
    {
        if (a == "00")
        {
            cout << 12 << b << c << " AM\n";
        }
        else
        {
            cout << a << b << c << " AM\n";
        }
    }
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