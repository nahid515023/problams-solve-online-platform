#include<bits/stdc++.h>
using namespace std;
vector<int> par, dsu_2ecc, dsu_cc;
int bridges;
int lca_iteration;
vector<int> last_visit;

void init(int n) {
    par.resize(n);
    dsu_2ecc.resize(n);
    dsu_cc.resize(n);
    lca_iteration = 0;
    last_visit.assign(n, 0);
    for (int i=1; i<=n; ++i) {
        dsu_2ecc[i] = i;
        dsu_cc[i] = i;
        par[i] = -1;
    }
    bridges = 0;
}

int find_2ecc(int v) {
    if (v == -1)
        return -1;
    return dsu_2ecc[v] == v ? v : dsu_2ecc[v] = find_2ecc(dsu_2ecc[v]);
}

int find_cc(int v) {
    v = find_2ecc(v);
    return dsu_cc[v] == v ? v : dsu_cc[v] = find_cc(dsu_cc[v]);
}

void make_root(int v) {
    v = find_2ecc(v);
    int root = v;
    int child = -1;
    while (v != -1) {
        int p = find_2ecc(par[v]);
        par[v] = child;
        dsu_cc[v] = root;
        child = v;
        v = p;
    }
}

void merge_path (int a, int b) {
    ++lca_iteration;
    vector<int> path_a, path_b;
    int lca = -1;
    while (lca == -1) {
        if (a != -1) {
            a = find_2ecc(a);
            path_a.push_back(a);
            if (last_visit[a] == lca_iteration){
                lca = a;
                break;
                }
            last_visit[a] = lca_iteration;
            a = par[a];
        }
        if (b != -1) {
            b = find_2ecc(b);
            path_b.push_back(b);
            if (last_visit[b] == lca_iteration){
                lca = b;
                break;
                }
            last_visit[b] = lca_iteration;
            b = par[b];
        }

    }

    for (int v : path_a) {
        dsu_2ecc[v] = lca;
        if (v == lca)
            break;
        --bridges;
    }
    for (int v : path_b) {
        dsu_2ecc[v] = lca;
        if (v == lca)
            break;
        --bridges;
    }
}

void add_edge(int a, int b) {
    a = find_2ecc(a);
    b = find_2ecc(b);
    if (a == b)
        return;

    int ca = find_cc(a);
    int cb = find_cc(b);

    if (ca != cb) {
        ++bridges;
        make_root(a);
        par[a] = dsu_cc[a] = b;
    } else {
        merge_path(a, b);
    }
}
int main()
{
    int tt , kk =1;
    cin >> tt;
    assert(tt>=1 && tt<=100);
    while(tt--) {
        int n,m;
        cin >> n >> m;
        assert(n>=1 && n<=1000000);
        assert(m>=1 && m<=2000000);
        init(n+1);
        bridges = 0;
        printf("Case %d:\n",kk++);
        while(m--) {
            int u,v;
            cin >> u >> v;
            assert(u != v);
            assert(u>= 1 && u<=n);
            assert(v>= 1 && v<=n);
            add_edge(u,v);
            cout << bridges << endl;
        }
    }
}