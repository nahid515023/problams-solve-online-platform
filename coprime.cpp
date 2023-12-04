#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(N), cnt(N);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    for (int i = 1; i < N; i++)
    {
        int x = 0;
        for (int j = i; j < N; j += i)
        {
            x += v[j];
        }
        cnt[i] = (x * (x - 1) * (x - 2)) / 6;
    }
    for(int i=N;i>0;i--)
    {
        for(int j=i*2;j<N;j+=i)
        {
            cnt[i]-=cnt[j];
        }
    }

    cout<<cnt[1]<<endl;
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