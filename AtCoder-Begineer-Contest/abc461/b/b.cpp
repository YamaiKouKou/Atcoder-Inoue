#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N),B(N);
    rep(i,N){
        int a;
        cin >> a;
        A[i] = a;
    }
    for(int j = 1; j <=N; ++j){
        int b;
        cin >> b;
        b--;
        B[b] = j;
    }
    rep(k,N){
        if(A[k] != B[k]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
