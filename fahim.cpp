#include <bits/stdc++.h>
using namespace std;
multiset<pair<int, int>> node;

// double f(int x, int y)
// {
//     int n = node.size();
//     double dx = 0, dy = 0;
//     for (int i = 0; i < n; i++)
//     {
//         dx += node[i].first;
//         dy += node[i].second;
//     }
//     dx = dx / n;
//     dy = dy / n;

//     double min_dis = 1e18;
//     double min_x = 0;
//     double min_y = 0;

//     for (int i = 0; i < n; i++)
//     {
//         double a = (node[i].first - dx);
//         double b = (node[i].second - dy);
//         double dis = sqrt(a * a + b * b);
//         if (dis < min_dis)
//         {
//             min_x = node[i].first;
//             min_y = node[i].second;
//             min_dis = dis;
//         }
//     }

//     double total_dis = 0;

//     for (int i = 0; i < n; i++)
//     {
//         double a = (node[i].first - min_x);
//         double b = (node[i].second - min_y);
//         double dis = sqrt(a * a + b * b);
//         total_dis += dis;
//     }

//     double ict = total_dis / n;
//     return ict;
// }

double distanceTwoNode()
{
    
}

double min_distences()
{
    vector<pair<int, int>> v;
    for (auto [x, y] : node)
    {
        v.push_back({x, y});
    }

    double min_dis = 1e18;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            double dis = distanceTwoNode(v[i],v[j]);
        }
    }
    return 0;
}

int main()
{
    double x, y;
    int n;
    cout << "How many node enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        node.insert({x, y});
    }
    min_distences();

    return 0;
}