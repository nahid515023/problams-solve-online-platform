#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<double, double>>> claster;
int n, level = 0, lv = 0;
double kopt = 1e18;

bool sortbyCond(const pair<double, double> &a, const pair<double, double> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}

double dist(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2;
    double y = y1 - y2;
    double result = sqrt(x * x + y * y);
    return result;
}

vector<vector<double>> distance_each_node(vector<vector<double>> point)
{
    int len = point.size();
    vector<vector<double>> d(len);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            double x1 = point[i][0];
            double y1 = point[i][1];
            double x2 = point[j][0];
            double y2 = point[j][1];
            d[i].push_back(dist(x1, y1, x2, y2));
        }
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return d;
}

vector<vector<double>> add_cluster(vector<vector<double>> point)
{
    int len = point.size();
    auto d = distance_each_node(point);

    double mi = 1e18;
    int x = -1, y = -1;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (mi > d[i][j])
            {
                x = i;
                y = j;
                mi = d[i][j];
            }
        }
    }
    double node = point[x][2] + point[y][2];
    double dx = (point[x][3] + point[y][3]);
    double dy = (point[x][4] + point[y][4]);
    double cen_x = dx / node;
    double cen_y = dy / node;
    point.erase(point.begin() + x);
    point.erase(point.begin() + y);
    point.push_back({cen_x, cen_y, node, dx, dy});
    // sort(point.begin(), point.end());

    claster[x].insert(claster[x].end(), claster[y].begin(), claster[y].end());
    claster.push_back(claster[x]);
    claster.erase(claster.begin() + x);
    claster.erase(claster.begin() + y);

    double totalWightOfCluster = 0;
    vector<pair<double, double>> clusterHead;

    for (int i = 0; i < claster.size(); i++)
    {
        double ck_min = 1e18;
        double ch_x = 0, ch_y = 0;
        for (auto [xx, yy] : claster[i])
        {
            double ds = dist(xx, yy, cen_x, cen_y);
            if (ck_min > ds)
            {
                ch_x = xx;
                ch_y = yy;
                ck_min = ds;
            }
        }
        cout << "cluster head :" << ch_x << " " << ch_y << endl;
        clusterHead.push_back({ch_x, ch_y});

        double wightOfCluster = 0;
        for (auto [xx, yy] : claster[i])
        {
            double ds = dist(xx, yy, ch_x, ch_y);
            wightOfCluster += ds;
        }
        wightOfCluster /= claster[i].size();

        cout << i + 1 << " wightOfCluster :" << wightOfCluster << endl;
        totalWightOfCluster += wightOfCluster;
    }

    double ICT = totalWightOfCluster / claster.size();
    cout << "ICT : " << ICT << endl;

    sort(clusterHead.begin(), clusterHead.end(), sortbyCond);

    double prv_x = 0, prv_y = 0;
    double ICS = 0;
    int ck = 0;
    for (auto [aa, bb] : clusterHead)
    {
        if (ck == 0)
        {
            prv_x = aa;
            prv_y = bb;
            ck = 1;
            continue;
        }
        ICS += dist(prv_x, prv_y, aa, bb);
        prv_x = aa;
        prv_y = bb;
    }
    ICS += dist(prv_x, prv_y, clusterHead.begin()->first, clusterHead.begin()->second);
    double IcsAvg = ICS / clusterHead.size();
    cout << "ICS AVG : " << IcsAvg << endl;

    double cbar = claster.size() / (n * 1.0);
    // cout << cbar << endl;
    double sum = 0;
    for (int i = 0; i < claster.size(); i++)
    {
        int cnode = claster[i].size();
        sum += ((cnode - cbar) * (cnode - cbar));
    }
    // cout << sum << endl;

    double stdDeviation = sqrt(sum / claster.size());
    cout << "std Deviation : " << stdDeviation << endl;

    double total = ICT + IcsAvg + stdDeviation;
    cout << "Total :" << total << endl;
    ++lv;
    if (total < kopt)
    {
        kopt = total;
        level = lv;
    }

    cout << "Number of cluster: " << claster.size() << endl;
    for (auto &aa : claster)
    {
        for (auto [x, y] : aa)
        {
            cout << "(" << x << "," << y << ") ";
        }
        cout << endl;
    }
    // cout << x << " " << y << endl;
    return point;
}

int main()
{
    freopen("input.txt", "r", stdin);
    cout << "Enter number of node input : ";
    cin >> n;
    vector<vector<double>> point;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        point.push_back({x, y, 1, x, y});
        claster.push_back({{x, y}});
    }
    int no = 1;
    cout << endl;
    while (point.size() > 2)
    {
        cout << "--------- Level: " << no++ << "-----------" << endl;
        point = add_cluster(point);
        for (int i = 0; i < point.size(); i++)
        {
            cout << point[i][0] << " " << point[i][1] << endl;
        }
    }
    cout << "---------------------------" << endl;
    cout << "Optimal level : " << level << endl;
}