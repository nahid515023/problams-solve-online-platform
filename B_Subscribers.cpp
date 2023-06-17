#include <bits/stdc++.h>
using namespace std;
#define int long long

string f(int a, string s)
{
    int cnt = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        s[i] = '0';
        cnt++;
        if (cnt == a)
        {
            break;
        }
    }
    return s;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n < 4)
    {
        cout << s << endl;
    }
    else if(n<5){
        cout << f(1, s) << endl;
    }
    else if(n<6)
    {
        cout << f(2, s) << endl;
    }
    else if(n<7)
    {
        cout << f(3, s) << endl;
    }
    else if(n<8)
    {
        cout << f(4, s) << endl;
    }
    else if(n<9){
        cout << f(5, s) << endl;
    }
    else{
        cout << f(6, s) << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}