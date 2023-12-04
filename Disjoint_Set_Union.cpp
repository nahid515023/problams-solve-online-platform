#include <bits/stdc++.h>
using namespace std;
int parent[20007], Size[20007], power[20007];

int find_set(int v)
{
    if (parent[v] == v)
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
        parent[b] = a;
        Size[a] += Size[b];
        power[a] += power[b];
    }
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= 20000; i++)
        {
            parent[i] = 0;
            Size[i] = 0;
            power[i] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            Size[i] = 1;
            power[i] = i;
        }

        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int a, b;
                cin >> a >> b;
                union_set(a, b);
            }
            else if (x == 2)
            {
                int a;
                cin >> a;
                a = find_set(a);
                cout << Size[a] << " " << power[a] << endl;
            }
            else
            {
                int a, b;
                cin >> a >> b;
                int aa = find_set(a);
                int bb = find_set(b);
                if (aa != bb)
                {
                    parent[aa] = bb;
                    Size[bb] += 1;
                    Size[aa] -= 1;
                    power[bb] += a;
                    if (aa == a)
                    {
                        power[aa] = a;
                    }
                    else
                        power[aa] -= a;
                }

                for (int i = 1; i <= n; i++)
                {
                    cout << parent[i] << " " << Size[i] << " " << power[i] << "\n";
                }
                cout << endl;
            }
        }
    }
}