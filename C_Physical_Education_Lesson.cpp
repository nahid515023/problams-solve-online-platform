#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, x;
set<int> st;

void test(int d)
{
    if (d % 2 == 0)
    {
        int k = (d + 2) / 2;
        if (k > x)
        {
            st.insert(k);
        }
    }
}

void cnt(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            test(i);
            test(n / i);
        }
    }
}

void solve()
{
    cin >> n >> x;
    n--;
    x--;
    st.clear();
    cnt(n - x);
    cnt(n + x);
    cout << st.size() << endl;
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