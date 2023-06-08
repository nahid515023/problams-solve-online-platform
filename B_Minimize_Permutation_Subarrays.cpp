#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int inx[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        inx[ar[i]] = i + 1;
    }
    int one = inx[1];
    int two = inx[2];
    int last = inx[n];

    if(last<min(one,two))
    {
        cout<<last<<" "<<min(one,two)<<endl;
    }
    else if(last>max(one,two))
    {
        cout<<last<<" "<<max(one,two)<<endl;
    }
    else{
        cout<<one<<" "<<two<<endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}