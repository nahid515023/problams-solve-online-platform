#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    int ar[n];
    int cnt=0;
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1]){
            cnt+=(ar[i-1]-ar[i]);
            ar[i]=ar[i-1];
        }
    }
    cout<<cnt<<endl;
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