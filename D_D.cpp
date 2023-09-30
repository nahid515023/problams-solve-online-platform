#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    while (1)
    {
        int n,m;
        cin>>n>>m;
        if(n==0 && m==0) break;

        vector<int>h(n);
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        multiset<int>kn;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            kn.insert(a);
        }
        bool ok=1;
        int ans=0;


        if(n>m) {
             cout<<"Loowater is doomed!"<<endl;
             ok=0;
        }
        else
        {
            for(int i=0;i<n;i++)
        {
            if(kn.lower_bound(h[i])==kn.end())
            {
                cout<<"Loowater is doomed!"<<endl;
                ok=0;
                break;
            }
            int x = *kn.lower_bound(h[i]);
            ans+=x;
            kn.erase(kn.lower_bound(h[i]));
        }
        if(ok) cout<<ans<<endl;
        }
    }
    return 0;
}