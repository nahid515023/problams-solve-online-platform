#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s[2];
    cin >> s[0] >> s[1];
    int x=1;
    while (x<n && s[0][x]<=s[1][x-1])
    {
        x++;
    }
    int y=x-1;
    while (y>0 && s[0][y]==s[1][y-1])
    {
        y--;
    }

    for(int i=0;i<x;i++) cout<<s[0][i];
    for(int i=x-1;i<n;i++) cout<<s[1][i];
    cout<<endl;
    cout<<x-y<<endl;
    
    
        
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