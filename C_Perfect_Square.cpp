#include <bits/stdc++.h>
using namespace std;
#define ll long long

int rotate90Clockwise(string a[], int N)
{
    int ans = 0;
    for (int i = 0; 2 * i < N; i++)
    {
        for (int j = 0; j * 2 < N; j++)
        {
            vector<char> v;
            v.push_back(a[i][j]);
            v.push_back(a[N - 1 - j][i]);
            v.push_back(a[N - 1 - i][N - 1 - j]);
            v.push_back(a[j][N - 1 - i]);
            char mx = *max_element(v.begin(), v.end());
            for (char x : v)
            {
                ans += (mx - x);
            }
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    string s[n];
    string a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        a[i] = s[i];
    }
    int ans = rotate90Clockwise(a, n);
    cout << ans << endl;
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