#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7;
int tree[N * 4][3], lazy[N * 4];



void propagate(int node, int tr, int tl)
{
    if (tl != tr)
    {
        lazy[node * 2] = (lazy[node] + lazy[node * 2]) % 3;
        lazy[node * 2 + 1] = (lazy[node] + lazy[node * 2 + 1]) % 3;
    }
    if (lazy[node] == 1)
    {
        swap(tree[node][0], tree[node][2]);
        swap(tree[node][1], tree[node][2]);
    }
    if (lazy[node] == 2)
    {
        swap(tree[node][0], tree[node][1]);
        swap(tree[node][1], tree[node][2]);
    }
    lazy[node] = 0;
}

void buildTree(int node, int tl, int tr)
{
    if (tl == tr)
    {
        tree[node][0] = 1;
        tree[node][1] = tree[node][2] = 0;
        return;
    }
    int mid = (tl + tr) / 2;
    buildTree(node * 2, tl, mid);
    buildTree(node * 2 + 1, mid + 1, tr);
    tree[node][1] = tree[node][2] = 0;
    tree[node][0] = tree[node * 2][0] + tree[node * 2 + 1][0];
}

int query(int node, int tl, int tr, int b, int e)
{

    if (lazy[node] > 0)
    {
        propagate(node, tr, tl);
    }
    if (tl > e || tr < b || e < b)
        return 0;
    if (tl >= b && tr <= e)
    {
        return tree[node][0];
    }

    int mid = (tl + tr) / 2;
    int aa = query(node * 2, tl, mid, b, e);
    int bb = query(node * 2 + 1, mid + 1, tr, b, e);
    return (aa + bb);
}

void updateRange(int node, int tl, int tr, int b, int e)
{
    if (lazy[node] > 0)
    {
        propagate(node, tr, tl);
    }

    if (tr < tl || tr < b || tl > e)
        return;

    if (tl >= b && tr <= e)
    {
        if (tl != tr)
        {
            lazy[node * 2] = (lazy[node * 2] + 1) % 3;
            lazy[node * 2 + 1] = (lazy[node * 2 + 1] + 1) % 3;
        }
        swap(tree[node][0], tree[node][2]);
        swap(tree[node][1], tree[node][2]);
    

        return;
    }

    int mid = (tl + tr) / 2;
    updateRange(node * 2, tl, mid, b, e);
    updateRange(node * 2 + 1, mid + 1, tr, b, e);
    tree[node][0] = (tree[node * 2][0] + tree[node * 2 + 1][0]);
    tree[node][1] = (tree[node * 2][1] + tree[node * 2 + 1][1]);
    tree[node][2] = (tree[node * 2][2] + tree[node * 2 + 1][2]);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    buildTree(1, 1, n);
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int a, b;
            cin >> a >> b;
            a++;
            b++;
            updateRange(1, 1, n, a, b);
        }
        else
        {
            int a, b;
            cin >> a >> b;
            a++;
            b++;
            cout << query(1, 1, n, a, b) << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    // freopen("input.txt", "r", stdin);
    while (t--)
    {
        solve();
    }
    return 0;
}