#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x,y;
        cin>>x>>y;
        int d = sqrtl(x*x-4LL*y);
        if(d>=0)
        {
            int a = (x+d)/2;
            int b = (x-d)/2;
            if(a*b!=y ||a+b!=x){
                cout<<0<<" ";
                continue;
            }
            if(d==0)
            {
                cout<<mp[a]*(mp[b]-1)/2<<" ";
            }
            else if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end())
            {
                cout<<mp[a]*mp[b]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        else{
            cout<<0<<" ";
        }
    }
    cout<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
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