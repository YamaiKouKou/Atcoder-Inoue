#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(N),B(M),C(N+M);
    bool ok = false;
    rep(i,N) {
        int a;
        cin >> a;
        A[i] = a;
        C[i] = a;
    }
    rep(j,M) {
        int b;
        cin >> b;
        B[j] = b;
        C[j+N] = b;
    }
    sort(A.begin(),A.end()); sort(C.begin(),C.end());
    rep(k,N-1){
        rep(l,N+M-1){
            if(A[k] == C[l] && A[k+1] == C[l+1]) ok = true;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}