#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    vector<ll> B;
    for(int j = 0; j < N; ++j){
        B.push_back(A[j]);
        int val = B.size();
        if(val > 1 && B[val-2]+1 != B[val-1]){
            B.pop_back();
        }
    }
    cout << B.size() << endl;
}
