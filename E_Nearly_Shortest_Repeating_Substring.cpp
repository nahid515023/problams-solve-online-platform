#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> div;
    int ans = n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            if (i != n / i)
            {
                div.push_back(n / 2);
            }
        }
    }
    sort(div.begin(), div.end());

    for (auto x : div)
    {
        int cnt = 0;
        string sub = s.substr(0, x);
        for (int i = x; i < n; i += x)
        {
            string nsub = s.substr(i, x);

            for (int k = 0; k < x; k++)
            {
                if (sub[k] != nsub[k])
                {
                    cnt++;
                }
            }
        }
        if (cnt < 2)
        {
            ans = min(ans, x);
        }
    }


    reverse(s.begin(), s.end());
    for (auto x : div)
    {
        int cnt = 0;
        string sub = s.substr(0, x);
        for (int i = x; i < n; i += x)
        {
            string nsub = s.substr(i, x);
            for (int k = 0; k < x; k++)
            {
                if (sub[k] != nsub[k])
                {
                    cnt++;
                }
            }
        }
        if (cnt < 2)
        {
            ans = min(ans, x);
        }
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