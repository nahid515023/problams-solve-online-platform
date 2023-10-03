#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a,b;
    cin>>a>>b;
    int x = a+b;
    if(x%3==0)
    {
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else if(min(a,b)>=x/3)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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