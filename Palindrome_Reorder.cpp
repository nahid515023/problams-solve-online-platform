#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin>>s;
    vector<int>ar(26,0);
    for(char c:s)
    {
        ar[c-'A']++;
    }
    int odd=0;
    int inx=-1;
    for(int i=0;i<26;i++)
    {
        if(ar[i]&1) 
        {
            odd++;
            inx=i;
        }
    }
    if(odd>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        string a;
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<ar[i]/2;j++)
            {
                a.push_back('A'+i);
            }
        }
        cout<<a;
        if(s.size()&1)
        {
            cout<<char('A'+inx);
        }
        reverse(a.begin(),a.end());
        cout<<a<<endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}