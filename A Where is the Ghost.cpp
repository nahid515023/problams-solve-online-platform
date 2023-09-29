#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 10007;
const int mod = 1000000007;
int ar[N];
int n;

int fun(int i, int sum, int cnt, vector<int> a)
{
    if (i >= n)
        return 0;

    if (sum % 2520 == 0 && sum > 0)
    {
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return 1;
    }

    a.push_back(ar[i + 1]);
    
    int ans = 0;
    ans = fun(i + 1, sum * ar[i + 1], cnt + 1, a);
    a.pop_back();
    ans = (ans + fun(i + 1, sum, cnt, a)) % mod;
    return ans;
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    vector<int> a;
    cout << fun(-1, 1, 0, a) << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}