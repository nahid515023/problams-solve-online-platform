#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    deque<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int i = 0;
    int cnt = 0;
    if (is_sorted(v.begin(), v.end()))
    {
        cout << cnt << endl;
        return;
    }
    while (i < n)
    {
        if (v.front() >= v.back())
        {
            v.push_front(v.back());
            v.pop_back();
        }
        else
        {
            break;
        }
        cnt++;
        i++;
    }
    if (is_sorted(v.begin(), v.end()))
    {
        cout << cnt << endl;
    }
    else
    {
        cout << -1 << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}