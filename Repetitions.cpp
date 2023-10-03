#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin>>s;
    int ans=1;
    int i=1;
    int cnt=1;
    while (i<s.size())
    {
        if(s[i]!=s[i-1])
        {
            ans = max(ans,cnt);
            cnt=1;
        }
        else{
            cnt+=1;
        }
        i++;
    }
    ans = max(ans,cnt);
    cout<<ans<<endl;
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