#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 200007;
int tree[4 * MAX];
int min_tree[4 * MAX];

void build(int a[], int node, int tl, int tr)
{
    if (tl == tr)
    {
        tree[node] = a[tl];
        min_tree[node] = a[tl];
        return;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    build(a, left, tl, mid);
    build(a, right, mid + 1, tr);
    tree[node] = tree[left] + tree[right];
    min_tree[node] = min(min_tree[left], min_tree[right]);
}

int query(int node, int tl, int tr, int b, int e)
{
    if (tl > e || tr < b)
        return 0;

    if (tl >= b && tr <= e)
        return tree[node];

    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    int p = query(left, tl, mid, b, e);
    int q = query(right, mid + 1, tr, b, e);
    return p + q;
}
int min_query(int node, int tl, int tr, int b, int e)
{
    if (tl > e || tr < b)
        return MAX;

    if (tl >= b && tr <= e)
        return min_tree[node];

    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    int p = min_query(left, tl, mid, b, e);
    int q = min_query(right, mid + 1, tr, b, e);
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
        min_tree[node] = val;
        return;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    update(left, tl, mid, inx, val);
    update(right, mid + 1, tr, inx, val);
    tree[node] = tree[left] + tree[right];
    min_tree[node] = min(min_tree[left], min_tree[right]);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(a, 1, 1, n);

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int inx, val;
            cin >> inx >> val;
            update(1, 1, n, inx, val);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            int ans = query(1, 1, n, l, r) - min_query(1, 1, n, l, r);
            cout << ans << endl;
        }
    }
    memset(tree, 0, sizeof(tree));
    memset(min_tree, 0, sizeof(min_tree));
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}