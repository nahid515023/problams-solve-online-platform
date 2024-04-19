#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int cnt=0;
        
        while(abs(a-b)<10){
            cnt++;
            a+=3;
        }
        cout<<cnt<<endl;
    }

}