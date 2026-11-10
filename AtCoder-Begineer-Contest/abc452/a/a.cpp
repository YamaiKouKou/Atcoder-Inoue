#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int M,D;
    cin >> M >> D;
    if(M == 1 && D == 7){
        cout << "Yes" << endl;
    }
    else if(M == 3 && D == 3){
        cout << "Yes" << endl;
    }
    else if(M == 5 && D == 5){
        cout << "Yes" << endl;
    }
    else if(M == 7 && D == 7){
        cout << "Yes" << endl;
    }
    else if(M == 9 && D == 9){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
