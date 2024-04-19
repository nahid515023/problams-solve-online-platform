#include <bits/stdc++.h>
using namespace std;
vector<pair<double, double>> position;

void print_distance_each_node(vector<vector<double>> distance, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int k = 0; k < len * 6; k++)
            cout << "-";
        cout << endl;
        for (int j = 0; j <= i; j++)
        {
            cout << distance[i][j] << " ";
        }
        cout << endl;
    }
    for (int k = 0; k < len * 6; k++)
        cout << "-";
    cout << endl;
}

double dist(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2;
    double y = y1 - y2;
    return sqrt(x * x + y * y);
}

vector<vector<double>> distance_each_node(int len)
{
    vector<vector<double>> distance(len);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            double x1 = position[i].first;
            double y1 = position[i].second;
            double x2 = position[j].first;
            double y2 = position[j].second;
            distance[i].push_back(dist(x1, y1, x2, y2));
        }
    }

    return distance;
}

double find_minimum_distance(vector<vector<double>> distance, int len)
{
    double mi = 1e18;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            mi = min(mi, distance[i][j]);
        }
    }
    return mi;
}

void construct_cluster(vector<vector<double>> distance, int len)
{
    double minimum_value = find_minimum_distance(distance, len);
    cout<<minimum_value<<endl;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (minimum_value == distance[i][j])
            {
                double x1 = position[i].first;
                double y1 = position[i].second;
                double x2 = position[j].first;
                double y2 = position[j].second;
                cout << x1 << " " << y1 << endl;
                cout << x2 << " " << y2 << endl;
                double centroide_x = x1
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        position.push_back({x, y});
    }
    vector<vector<double>> distance = distance_each_node(n);
    construct_cluster(distance,n);

    print_distance_each_node(distance, n);
}