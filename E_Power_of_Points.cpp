#include <bits/stdc++.h>
using namespace std;
#define int long long

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> ar;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ar.push_back({a, i});
    }
    sort(ar.begin(), ar.end());

    int pre[n + 1];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            pre[i] = ar[i].first;
            continue;
        }
        pre[i] = pre[i - 1] + ar[i].first;
    }

    // cout << "ar: ";
    // print(ar, n);
    // cout << "pre: ";
    // print(pre, n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        int x = (pre[n - 1] - pre[i]) - ((ar[i].first - 1) * (n - i - 1)) + 1;
        if (i > 0)
            x += (ar[i].first * i) - (pre[i - 1] - i);
        a[ar[i].second]=x;
    }
    print(a,n);
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