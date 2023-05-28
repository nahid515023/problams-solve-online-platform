#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    map<int, int> mp, mp2;

    cin >> a[0];
    if (n == 1)
    {
        mp2[a[0]]++;
    }
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == a[i - 1])
        {
            mp[a[i]]++;
            mp2[a[i]] = max(mp2[a[i]], mp[a[i]]);
        }
        else
        {
            mp[a[i - 1]]++;
            mp2[a[i - 1]] = max(mp2[a[i - 1]], mp[a[i - 1]]);
            mp[a[i - 1]] = 0;
        }
    }

    mp[a[n - 1]]++;
    mp2[a[n - 1]] = max(mp2[a[n - 1]], mp[a[n - 1]]);

    map<int, int> mp3, mp4;
    cin >> b[0];
    if (n == 1)
    {
        mp4[b[0]]++;
    }

    for (int i = 1; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == b[i - 1])
        {
            mp3[b[i]]++;
            mp4[b[i]] = max(mp4[b[i]], mp3[b[i]]);
        }

        else
        {
            mp3[b[i - 1]]++;
            mp4[b[i - 1]] = max(mp4[b[i - 1]], mp3[b[i - 1]]);
            mp3[b[i - 1]] = 0;
        }
    }

    mp3[b[n - 1]]++;
    mp4[b[n - 1]] = max(mp4[b[n - 1]], mp3[b[n - 1]]);

    int mx = 0;

    for (auto [x,y] : mp2)
    {
        int r = mp2[x] + mp4[x];
        mx = max(r, mx);
    }

    for (auto [x,y] : mp4)
    {
       int  r = mp2[x] + mp4[x];
        mx = max(r, mx);
    }

    cout << mx << endl;
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