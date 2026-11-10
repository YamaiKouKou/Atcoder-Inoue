#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
    int N,x,y,z;
    vector<int> A(N),B(N);
    cin >> N >> x >> y >> z;
    rep(i,N){ cin >> A[i];}
    rep(j,N){ cin >> B[j];}
    sort(A.begin(),A.end()); sort(B.begin(),B.end());
    
}