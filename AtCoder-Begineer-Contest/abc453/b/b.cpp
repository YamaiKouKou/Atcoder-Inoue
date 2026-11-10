#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int T,X;
    cin >> T >> X;
    vector<int> A(T);
    int prev = -1;
    rep(i,T+1){
        int A;
        cin >> A;
        if(prev < 0 || abs(A-prev) >= X){
            cout << i << " " << A << endl;
            prev = A;
        }
    }
}
