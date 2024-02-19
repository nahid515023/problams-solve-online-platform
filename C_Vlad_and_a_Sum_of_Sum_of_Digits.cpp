#include <bits/stdc++.h>
using namespace std;
#define int long long

int ar[200000 + 7];

int sum(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

void solve()
{
    int n;
    cin >> n;
    int s = ar[n];
    cout << s << endl;
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
    ar[0]=0;

    for (int i = 1; i <= 200003; i++)
    {
        ar[i] = ar[i - 1] + sum(i);
    }

    while (t--)
    {
        solve();
    }
    return 0;
}