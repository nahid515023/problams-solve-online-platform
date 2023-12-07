#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s ;
    cin>>s;

    for(int i=1;i<=8;i++)
    {
        if(i==s[1]-'0') continue;
        cout<<s[0]<<i<<endl;
    }

    char ch='a';
    for(int i=0;i<=7;i++)
    {
        if(i+ch==s[0]) continue;
        cout<<char(ch+i)<<s[1]<<endl;
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