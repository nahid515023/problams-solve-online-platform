#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ck(string a)
{
    if(a[0]=='0') return 0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>='0' && a[i]<='9') continue;
        return 0;
    }
    return 1;
}

bool ck_prime(int n)
{
    if(n==2) return 1;
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}


int32_t main()
{
    string s;
    vector<string>v;
    while (cin>>s)
    {
        v.push_back(s);
    }
    if(v.size()!=3 || !ck(v[0]) || !ck(v[1]) ||!ck(v[2]))
    {
        cout<<0<<endl;
    }
    else{
        int a = stoll(v[0]);
        int b = stoll(v[1]);
        int c = stoll(v[2]);
        if(a==(b+c) && ck_prime(b) && ck_prime(c) && a%2==0 && a>3 && a<=1000000000)
        {
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    
    
    return 0;
}