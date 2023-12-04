#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mi = min({a, b, c});

    if (a % mi || b % mi || c % mi)
    {
        cout << "NO" << endl;
        return;
    }

    int tot = 0;

    while (a != mi)
    {
        if (a % mi != 0 || tot >= 3)
        {
            cout << "NO" << endl;
            return;
        }
        a-=mi;
        tot++;
    }
    while (b != mi)
    {
        if (b % mi != 0 || tot >= 3)
        {
            cout << "NO" << endl;
            return;
        }
        b-=mi;
        tot++;
    }
    // cout<<tot<<endl;
    while (c != mi)
    {
        if (c % mi != 0 || tot >= 3)
        {
            cout << "NO" << endl;
            return;
        }
        c-=mi;
        tot++;
    }
    cout << "YES" << endl;
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