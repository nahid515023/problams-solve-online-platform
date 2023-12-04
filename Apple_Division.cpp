#include <bits/stdc++.h>
using namespace std;
#define int long long
int ans = 1e12;

void fun(int i, int s, int p, vector<int> a)
{
    if (i == a.size())
    {
        ans = min(ans, abs(s - p));
        return;
    }
    fun(i + 1, s + a[i], p, a); 
    fun(i + 1, s, p+a[i], a);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    fun(0, 0, 0, v);
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}