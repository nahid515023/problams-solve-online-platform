#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 7;
bool tree[N * 4];
string ar;

int query(int node, int tl, int tr, int b, int e)
{
    if (tl > e || tr < b)
        return 0;
    if (tl == b && tr == e)
        return tree[node];

    if (tree[node])
    {
        tree[node * 2] = !tree[node * 2];
        tree[node * 2 + 1] = !tree[node * 2 + 1];
        tree[node] = 0;
    }

    int mid = (tl + tr) / 2;
    int aa = query(node * 2, tl, mid, b, e);
    int bb = query(node * 2 + 1, mid + 1, tr, b, e);
    return aa | bb;
}

void updateRange(int node, int tl, int tr, int b, int e)
{
    if (tr < tl || tr < b || tl > e)
        return;

    if (tl >= b && tr <= e)
    {
        tree[node] = !tree[node];
        return;
    }
    int mid = (tl + tr) / 2;
    updateRange(node * 2, tl, mid, b, e);
    updateRange(node * 2 + 1, mid + 1, tr, b, e);
}

void solve()
{
    int n, q;
    cin >> ar;
    n = ar.size();
    cin >> q;
    memset(tree, 0, sizeof(tree));

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == '1')
        {
            updateRange(1, 1, n, i+1, i+1);
        }
    }

    while (q--)
    {
        char ch;
        cin >> ch;
        if (ch == 'I')
        {
            int a, b;
            cin >> a >> b;
            updateRange(1, 1, n, a, b);
        }
        else
        {
            int a;
            cin >> a;
            cout << query(1, 1, n, a, a) << endl;
        }
    }
}

int32_t main()
{

    int t = 1;
    cin >> t;
    int i = 0;
    // freopen("input.txt", "r", stdin);
    while (t--)
    {
        printf("Case %lld:\n", ++i);
        solve();
    }
    return 0;
}