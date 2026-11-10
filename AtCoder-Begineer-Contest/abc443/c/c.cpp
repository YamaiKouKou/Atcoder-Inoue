#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N,T;
    cin >> N >> T;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    int pre_time = -200;
    int close = 0;
    for(int j = 0;j<N;j++){
        if(pre_time < A[j] && A[j] <= pre_time+100){

        }
        else if(A[j]+100 >= T){
            pre_time=A[j];
            close += T-pre_time;
        }
        else{
            close += 100;
            pre_time = A[j];
        }
    }
    cout << T - close << endl;

}
