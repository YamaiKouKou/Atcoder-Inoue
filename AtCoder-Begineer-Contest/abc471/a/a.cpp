#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int A,B;
    cin >> A >> B;
    if((A+B) == 9 || (A-B) == 9 || A*B == 9 || A == 9*B ){
        cout << "Nine" << endl;
    }
    else{
        cout << "Nein" << endl;
    }
}
