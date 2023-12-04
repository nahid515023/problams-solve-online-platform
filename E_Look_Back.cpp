#include <bits/stdc++.h>
using namespace std;
#define int long long

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int ans = 0;

    for (int i = 1; i < n; i++)
    {
       if(ar[i]<ar[i-1])
       {
            int lg2=log2(ar[i-1]-ar[i]);
            ar[i-1]=binpow(2,lg2+1);
            ans+=lg2+1;
       }
    }
    cout<<ans<<endl;
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