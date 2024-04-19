#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < n; i++)
    {
        if ((a[i] == 'b' && b[i] != 'b') || (a[i] != 'b' && b[i] == 'b'))
        {
            cout << "NO" << endl;
            return;
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a != b)
    {
        cout << "NO" << endl;
        return;
    }

    vector<int> inx;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'b')
        {
            inx.push_back(i);
        }
    }

    if (inx.size() == 0)
    {
        cout << "NO" << endl;
        return;
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