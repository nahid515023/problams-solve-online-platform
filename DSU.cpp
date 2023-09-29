#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100007;

int perant[N], Size[N];

void make(int v)
{
    perant[v] = v;
}
int find(int v)
{
    if (perant[v] == v)
        return v;
    return perant[v] = find(perant[v]);
}
void unions(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
        {
            swap(a, b);
        }
        perant[b] = a;
        Size[a] += Size[b];
    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        make(a);
    }
    cout << find(2) << endl;
    unions(3, 2);
    unions(3, 4);
    unions(3, 1);
    cout << find(3) << endl;
    for (int i = 1; i <= n; i++)
        cout << perant[i] << " ";
    cout << endl;
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