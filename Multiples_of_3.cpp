#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 100001;
int tree[4 * MAX];
int lazy[4 * MAX];

void build(int a[], int node, int tl, int tr)
{
    if (tl == tr)
    {
        tree[node] = a[tl];
        return;
    }
    int mid = tl + (tr - tl) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    build(a, left, tl, mid);
    build(a, right, mid + 1, tr);
    tree[node] = tree[left] + tree[right];
}

void propagate(int node, int tl, int tr)
{
    if (lazy[node] != 0)
    {
        tree[node] += lazy[node] * (tr - tl + 1);
        if (tl != tr)
        {
            lazy[node * 2] += lazy[node];
            lazy[node * 2] %= 3;
            lazy[node * 2 + 1] += lazy[node];
            lazy[node * 2 + 1] %= 3;
        }
        lazy[node] = 0;
    }
}

int query(int node, int tl, int tr, int b, int e)
{
    if (tl > e || tr < b)
        return 0;

    propagate(node, tl, tr);

    if (tl >= b && tr <= e)
    {
        return tree[node];
    }

    int mid = tl + (tr - tl) / 2;
    return query(node * 2, tl, mid, b, e) + query(node * 2 + 1, mid + 1, tr, b, e);
}

void update(int node, int tl, int tr, int b, int e, int val)
{
    propagate(node, tl, tr);

    if (tl > e || tr < b)
        return;

    if (tl >= b && tr <= e)
    {
        tree[node] += val * (tr - tl + 1);
        if (tl != tr)
        {
            lazy[node * 2] += val;
            lazy[node * 2 + 1] += val;
        }
        return;
    }

    int mid = tl + (tr - tl) / 2;
    update(node * 2, tl, mid, b, e, val);
    update(node * 2 + 1, mid + 1, tr, b, e, val);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int32_t main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    build(a, 1, 0, n - 1);

    while (q--)
    {
        int x, i, j;
        cin >> x >> i >> j;
        if (x == 0)
        {
            update(1, 0, n - 1, i, j, 1);
        }
        else
        {
            cout << query(1, 0, n - 1, i, j) << endl;
        }
    }

    return 0;
}
