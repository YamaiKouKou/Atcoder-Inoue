#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
vector<ll> A,B;
int main(){
    int N;
    cin >> N;
    A.resize(N); B.resize(N);
    rep(i,N) cin >> A[i];
    rep(j,N) cin >> B[j];
    int count1 = 0;
    int count2 = 0;
    rep(k,N){
        if(A[k] == B[k]) count1++;
    }
    for(int l = 0;l < N; ++l){
        for(int m = 0;m < N; ++m){
            if(A[l] == B[m] && l != m) count2++; 
        }
    }
    cout << count1 << endl;
    cout << count2 << endl;
}