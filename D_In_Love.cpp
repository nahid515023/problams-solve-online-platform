#include <bits/stdc++.h>
using namespace std;
#define int long long

multiset<int> a, b;

void solve()
{
    char ch;
    cin >> ch;
    if (ch == '+')
    {
        int x, y;
        cin >> x >> y;
        a.insert(x);
        b.insert(y);

        if (*a.rbegin() > *b.begin())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        int x, y;
        cin >> x >> y;
        a.erase(a.find(x));
        b.erase(b.find(y));
        if (!a.empty() && !b.empty() && *a.rbegin() > *b.begin())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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