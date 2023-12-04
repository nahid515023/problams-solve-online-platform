#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(26);
    string s;
    cin >> s;
    for (char ch : s)
    {
        v[ch - 'a']++;
    }

    int odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] % 2 == 1)
            odd++;
    }

    if (odd - 1 > k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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