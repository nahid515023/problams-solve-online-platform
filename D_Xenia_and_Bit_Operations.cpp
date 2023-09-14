#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 100001;
int tree[4 * MAX];
int x=0;

bool build(int a[], int node, int tl, int tr)
{
    if (tl == tr)
    {
        tree[node] = a[tl];
        return 0;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    bool x = build(a, left, tl, mid);
    bool y = build(a, right, mid + 1, tr);
    if (x == 0 && y == 0)
    {
        tree[node] = tree[left] | tree[right];
        return 1;
    }
    else
    {
        tree[node] = tree[left] ^ tree[right];
        return 0;
    }
}

void update(int node, int tl, int tr, int inx, int val)
{
    if (tl > inx || tr < inx)
    {
        return;
    }
    if (tl == inx && tr == inx)
    {
        tree[node] = val;
        x = 0;
        return;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    update(left, tl, mid, inx, val);
    update(right, mid + 1, tr, inx, val);

    if (x % 2 == 0)
    {
        tree[node] = tree[left] | tree[right];
    }
    else
    {
        tree[node] = tree[left] ^ tree[right];
    }
    x++;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    n = 1 << n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    build(v, 1, 0, n - 1);
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        update(1, 1, n, x, y);
        cout << tree[1] << endl;
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