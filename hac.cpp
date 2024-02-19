#include <bits/stdc++.h>
using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2;
    double y = y1 - y2;
    double result = sqrt(x * x + y * y);
    return result;
}

vector<vector<double>> distance_each_node(auto point)
{
    int len = point.size();
    vector<vector<double>> d(len);
    for (auto it = point.begin(); it != point.end(); it++)
    {
        for (auto it2 = point.begin(); it2 <= it; it2++)
        {
            auto [x1, y1] = it->first;
            auto [x2, y2] = it2->first;
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

auto add_cluster(auto point)
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
    // cout << mx << endl;
    double node = point[x][2] + point[y][2];
    double dx = (point[x][3] + point[y][3]);
    double dy = (point[x][4] + point[y][4]);
    point.erase(point.begin() + x);
    point.erase(point.begin() + y);
    point.push_back({dx / node, dy / node, node, dx, dy});
    // cout << x << " " << y << endl;
    return point;
}

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cout << "Enter number of node input : ";
    cin >> n;
    // vector<vector<double>> point;
    map<pair<double, double>, vector<pair<double, double>>> point;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        // point.push_back({x, y, 1, x, y});
        map[{x, y}].push_back({x, y});
    }
    while (point.size() > 1)
    {
        point = add_cluster(point);
        for (int i = 0; i < point.size(); i++)
        {
            cout << point[i][0] << " " << point[i][1] << endl;
        }
        cout << "---------------------------" << endl;
    }
}