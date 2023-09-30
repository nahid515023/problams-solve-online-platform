#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s[n+5];
    for(int i=0;i<n;i++)
    cin>>s[i];

    if(n&1)
    {
        cout<<"No"<<endl;
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(s[i][0]==')' || s[i][n-1]=='(')
        {
            cout<<"No"<<endl;
            return;
        }
    }

    for(int i=1;i<n-1;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(s[j][i]=='(')
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        if(cnt!=0) {
            cout<<"No"<<endl;
        return ;
        }
    }
    cout<<"Yes"<<endl;
   
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