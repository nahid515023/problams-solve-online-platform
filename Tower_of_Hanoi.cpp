
#include <bits/stdc++.h>
using namespace std;
#define int long long

void fun(int n,int a,int b,int c)
{
    if(n==0)
    {
        return;
    }
    fun(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    fun(n-1,b,a,c);
}

void solve()
{
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    fun(n,1,2,3);
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