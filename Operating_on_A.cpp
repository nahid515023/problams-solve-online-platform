#include <bits/stdc++.h>
using namespace std;
#define int long long

int n,i;

void solve()
{
    cin>>n;

    int a[n+5],b[n+5];


    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        cin>>b[i];
    }

    for(i=1;i<n-2;i++){

        if(a[i]!=b[i]){

            int num1=a[i-1];
            int num2=a[i];
            int num3=a[i+1];
            int num4=a[i+2];

            a[i-1]=num1+num2+num3;
            a[i]=(-1)*(num3);
            a[i+1]=(-1)*(num2);
            a[i+2]=num2+num3+num4;


        }
    }

     for(i=0;i<n;i++){

        if(a[i]!=b[i]){
            cout<<"NO"<<endl; return;
        }
    }

    cout<<"YES"<<endl;

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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}