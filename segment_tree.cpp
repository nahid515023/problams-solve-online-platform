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

void solve()
{
    int a[] = {0, 2, 4, -3, 7, 8, -2};
    build(a, 1, 1, 6);
    cout << query(1, 1, 6, 2, 2) << endl;
    cout << query(1, 1, 6, 1, 6) << endl;
    update(1, 1, 6, 2, 10);
    cout << query(1, 1, 6, 2, 2) << endl;
    cout << query(1, 1, 6, 1, 6) << endl;
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