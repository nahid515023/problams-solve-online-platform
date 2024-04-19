#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 2; i < n - 1; i+=2)
    {
        if (b[i] == '<' && (a[i + 1] == '<' || a[i-1] == '<'))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}