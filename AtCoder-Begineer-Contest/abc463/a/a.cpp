#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    double X,Y;
    cin >> X >> Y;
    double val = X * 9 / 16;
    if(val == Y){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
