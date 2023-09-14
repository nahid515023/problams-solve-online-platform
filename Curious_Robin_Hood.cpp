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
    tree[node] = tree[left] + tree[right];
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
    tree[node] = tree[left] + tree[right];
}

void update2(int node, int tl, int tr, int inx, int val)
{
    if (tl > inx || tr < inx)
    {
        return;
    }
    if (tl == inx && tr == inx)
    {
        tree[node] += val;
        return;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    update2(left, tl, mid, inx, val);
    update2(right, mid + 1, tr, inx, val);
    tree[node] = tree[left] + tree[right];
}

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(a, 1, 0, n - 1);

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int aa;
            cin >> aa;
            aa++;
            cout << query(1, 1, n, aa, aa) << endl;
            update(1, 1, n, aa, 0);
        }
        else if (x == 2)
        {
            int aa, bb;
            cin >> aa >> bb;
            aa++;
            update2(1, 1, n, aa, bb);
        }
        else
        {
            int aa, bb;
            cin >> aa >> bb;
            aa++;
            bb++;
            cout << query(1, 1, n, aa, bb) << endl;
        }
    }
}

int32_t main()
{
    int i = 1;
    // freopen("input.txt", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
    {
        printf("Case %lld:\n", i++);
        solve();
    }
    return 0;
}