#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int mi = v[0];
    int inx = 0;
    if (is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] <= mi)
        {
            inx = i;
        }
    }
    int x = inx;
    int mx = mi;
    while (x > 0)
    {
        if (v[x] > v[x - 1])
        {
            cout << -1 << endl;
            return;
        }
        mx = max(mx, v[x - 1]);
        x--;
    }
    x = inx + 1;
    mi = v[x];
    while (x < n - 1)
    {
        if (v[x] < v[x + 1])
        {
            cout << -1 << endl;
            return;
        }
        mi = min(mi, v[x + 1]);
        x++;
    }
    if(mx>mi){
        cout<<-1<<endl;
    }
    else{
        cout<<n-v[inx]<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}