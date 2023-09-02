#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 100001;
int tree[4 * MAX];

void build(int a[], int node, int tl, int tr)
{
    if (tl == tr)
    {
        tree[node] = a[tl];
        return;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    build(a, left, tl, mid);
    build(a, right, mid + 1, tr);
    tree[node] = min(tree[left], tree[right]);
}

int query(int node, int tl, int tr, int b, int e)
{
    if (tl > e || tr < b)
        return MAX;

    if (tl >= b && tr <= e)
        return tree[node];

    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    int p = query(left, tl, mid, b, e);
    int q = query(right, mid + 1, tr, b, e);
    return min(p, q);
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
        return;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    update(left, tl, mid, inx, val);
    update(right, mid + 1, tr, inx, val);
    tree[node] = min(tree[left], tree[right]);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(a, 1, 1, n);
    while (q--)
    {
        int b, e;
        cin >> b >> e;
        // cout << b << " " << e << endl;
        cout << query(1, 1, n, b, e) << endl;
    }
}

int32_t main()
{

    int t = 1;
    cin >> t;
    int i = 0;
    while (t--)
    {
        memset(tree, MAX, sizeof(tree));
        cout << "Case " << ++i << ":" << endl;
        solve();
    }
    return 0;
}