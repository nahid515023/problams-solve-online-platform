#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;
    cin>>n>>k;
    multiset<int>ms;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        ms.insert(a);
    }

    for(int i=0;i<n;i++)
    {
        int x = k-v[i];
        ms.erase(ms.find(v[i]));
        if(ms.find(x)!=ms.end())
        {
            cout<<i+1<<" ";
            for(int j=i+1;j<n;j++)
            {
                if(x==v[j])
                {
                    cout<<j+1<<endl;
                    break;
                }
            }
            return;
        }
        ms.insert(v[i]);
    }
    cout<<"IMPOSSIBLE"<<endl;




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