#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;


    int a[n];
    int b[n];
    int c[n];
    a[0]=0;
    b[n-1]=0;

    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<n;i++)
     cin>>c[i];

    for(int i=n-2;i>=0;i--)
    {
        b[i]+=b[i+1];
    }


    vector<int>aa;
     for(int i=0;i<n;i++)
    {
        int x = a[i]+b[i]+c[i];
        aa.push_back(x);
    }
    sort(aa.begin(),aa.end());
    cout<<aa[0]+aa[1]<<endl;
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