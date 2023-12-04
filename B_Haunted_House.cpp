#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll one = 0;
    vector<ll> v;
    ll tot = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            tot += one;
            v.push_back(tot);
        }
        else
        {
            one++;
        }
    }
    ll cnt = 0;
    for (auto x : v)
    {
        cout << x << " ";
        cnt++;
    }
    for (int i = cnt; i < n; i++)
    {
        cout << -1 << " ";
    }
    cout << endl;
}

int main()
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