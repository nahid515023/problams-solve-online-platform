#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    int ans = 0;

    if(ar[1]==1){
        ans++;
        swap(ar[1],ar[2]);
    }

    for (int i = 2; i <= n; i++)
    {
        if (i < n && ar[i] == i)
        {
            if (ar[i - 1] == i - 1)
            {
                swap(ar[i - 1], ar[i]);
            }
            else if (ar[i + 1] == i + 1)
            {
                swap(ar[i], ar[i + 1]);
            }
            else if (ar[i] != i - 1 && i != ar[i - 1])
            {
                swap(ar[i - 1], ar[i]);
            }
            else
            {
                swap(ar[i], ar[i + 1]);
            }
            ans++;
        }
        if (i == n && ar[i] == i)
        {
            swap(ar[i - 1], ar[i]);
            ans++;
        }
    }
    cout<<ans<<endl;
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