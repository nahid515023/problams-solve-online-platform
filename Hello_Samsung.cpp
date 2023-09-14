#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string a = "Samsung";
    int j = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == a[j])
        {
            j++;
            if (j == 7)
            {
                cout << "SRBD" << endl;
                return 0;
            }
        }
    }
    cout << "GHOST" << endl;

    return 0;
}