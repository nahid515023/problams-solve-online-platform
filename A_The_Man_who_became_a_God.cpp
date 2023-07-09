#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> dif;
    for (int i = 1; i < n; i++)
    {
        dif.push_back(abs(v[i] - v[i - 1]));
    }
    sort(dif.rbegin(),dif.rend());
    int s = 0;
    for(int i=0;i<n-1;i++)
    {
        if(i<k-1) continue;
        s+=dif[i];
    }
    cout << s << endl;
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