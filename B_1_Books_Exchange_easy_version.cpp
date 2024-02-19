#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int parent[N], Size[N];

void make_set(int v)
{
    parent[v] = v;
    Size[v] = 1;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[a] = b;
        // Size[a] += Size[b];
        Size[b] += Size[a];


    }
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        make_set(i);
    }
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        union_set(x, i);
    }
    for (int i = 1; i <= n; i++)
    {
        int x = find_set(i);
        cout << Size[x] << " ";
    }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}