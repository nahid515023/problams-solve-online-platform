#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string a[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
    string s, b;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        b.append(a[s[i] - '0']);
    }
    sort(b.rbegin(), b.rend());
    cout << b << endl;
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