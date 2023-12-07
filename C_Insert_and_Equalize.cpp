#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int>st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }

    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int val=0;
    for(int i=1;i<n;i++){
        val = __gcd(val,v[i]-v[i-1]);
    }
    
    int mx = *max_element(v.begin(),v.end());
    val = abs(val);
    int cnt=0;

    // cout<<val<<" ";

    for(int i=0;i<n;i++)
    {
        cnt+=(mx-v[i])/val;
    }
    // cout<<cnt<<endl;

    int aa=0;
    while (*st.begin()<=mx)
    {
        mx -=val;
        aa++;
        // cout<<mx<<endl;
        if(!st.count(mx))
        {
            cnt+=aa;
            break;
        }
    }
    cout<<cnt<<endl;
    
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