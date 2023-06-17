#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main()
{
   int n;
    cin>>n;
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m[a]++;
        v.push_back(a);
    }
    auto x = m.begin();

    if(x->second>1)
    {
        cout<<"Still Rozdil"<<endl;
    }
    else{
        for(int i=0;i<n;i++)
        {
            if(x->first==v[i])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}