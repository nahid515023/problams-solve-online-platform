#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v.empty() || s[i] >= s[v.back()])
        {
            v.push_back(i);
        }
    }
    reverse(v.begin(), v.end());
    int j = 0;
    while (j < v.size() && s[v[j]] == s[v[0]])
    {
        j++;
    }
    int ans = v.size() - j;

    for (int i = 0; i < v.size() / 2; i++)
    {
        swap(s[v[i]], s[v[v.size() - 1 - i]]);
    }

    if (!is_sorted(s.begin(), s.end()))
    {
        ans = -1;
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
    while (t--)
    {
        solve();
    }
    return 0;
}