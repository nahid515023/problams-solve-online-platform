#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int val = 1;
    for (int &x : v)
    {
        x = val++;
    }

    while (v.size() > 1)
    {
        int aa=v.size();
        vector<int> a;
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
            {
                a.push_back(v[i]);
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        v.clear();
        v = a;
        if(aa%2==1)
        {
            v.insert(v.begin(),v.back());
            v.pop_back();
        }
    }
    cout << v[0] << endl;
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