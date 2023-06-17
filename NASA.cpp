#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> v;

void f()
{
    for (int i = 1; i <= 1<<17; i++)
    {
        string s = to_string(i);
        string a = s;
        reverse(s.begin(), s.end());
        if (a == s)
        {
            v.push_back(i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int ar[1<<17];
    int a[n];
    for (int i = 0; i < 1<<17; i++)
    {
        ar[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar[x]++;
        a[i]=x;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            int x = a[i] ^ v[j];
            ans += ar[x];
        }
    }
    ans/=2;
    for(int i=0;i<1<<17;i++)
    {
        ans+=(ar[i]*(ar[i]+1))/2;
    }
    cout << ans << endl;
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
    f();
    while (t--)
    {
        solve();
    }
    return 0;
}