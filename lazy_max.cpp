#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7;
int tree[N * 4], lazy[N * 4], ar[N];

void buildTree(int node, int tl, int tr)
{
    if (tr < tl)
        return;
    if (tl == tr)
    {
        tree[node] = ar[tl];
        return;
    }
    int mid = (tl + tr) / 2;
    buildTree(node * 2, tl, mid);
    buildTree(node * 2 + 1, mid + 1, tr);
    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

int query(int node, int tl, int tr, int b, int e)
{
    if (lazy[node] != 0)
    {
        tree[node] += lazy[node];
        if (tr != tl)
        {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (tl > e || tr < b)
        return 0;
    if (tl >= b && tr <= e)
        return tree[node];

    int mid = (tl + tr) / 2;
    int aa = query(node * 2, tl, mid, b, e);
    int bb = query(node * 2 + 1, mid + 1, tr, b, e);
    return max(aa, bb);
}

void updateNode(int node, int tl, int tr, int pos, int val)
{
    if (tr < tl || tr < pos || tl > pos)
        return;
    if (tl == tr)
    {
        tree[node] += val;
        return;
    }
    int mid = (tl + tr) / 2;
    updateNode(node * 2, tl, mid, pos, val);
    updateNode(node * 2 + 1, mid + 1, tr, pos, val);
    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

void updateRange(int node, int tl, int tr, int b, int e, int val)
{
    if (lazy[node] != 0)
    {
        tree[node] += lazy[node];
        if (tr != tl)
        {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (tr < tl || tr < b || tl > e)
        return;

    if (tl >= b && tr <= e)
    {
        tree[node] += val;
        if (tr != tl)
        {
            lazy[node * 2] += val;
            lazy[node * 2 + 1] += val;
        }
        return;
    }

    int mid = (tl + tr) / 2;
    updateRange(node * 2, tl, mid, b, e, val);
    updateRange(node * 2 + 1, mid + 1, tr, b, e, val);
    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    buildTree(1, 0, n - 1);


    for (int i = 0; i < n * 4; i++)
    {
        cout << tree[i] << " ";
    }
    cout << endl;


    updateRange(1, 1, n, 1, 5, 3);
    updateRange(1, 1, n, 1, 3, 2);

    cout << query(1, 1, n, 1, 5) << endl;
    cout << query(1, 1, n, 3, 5) << endl;
    cout << query(1, 1, n, 3, 4) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    freopen("input.txt", "r", stdin);
    while (t--)
    {
        solve();
    }
    return 0;
}