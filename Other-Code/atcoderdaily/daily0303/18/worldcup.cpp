#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main(){
    int Y;
    cin >> Y;
    if(Y%4==3) cout << (((Y/4)+1)*4)+2 << endl;
    else cout << ((Y/4)*4)+2 << endl;
}