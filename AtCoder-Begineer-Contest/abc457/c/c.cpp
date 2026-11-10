#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    ll N,K;
    cin >> N >> K;
    vector<vector<ll>> A(N);
    vector<ll> C(N);

    rep(i,N){
        ll L;
        cin >> L;
        A[i].push_back(L);
        for(int j = 1; j <= L; ++j){
            ll ANUM;
            cin >> ANUM;
            A[i].push_back(ANUM);
        }
    }

    rep(k,N) {cin >> C[k];}
    ll pos = 0; ll pre_pos = 0; ll ele = 0;
    while(pos < K){
        pre_pos = pos;
        pos += A[ele][0] * C[ele];
        ele++;
    }
    ele--;
    ll ans_pos = (K-pre_pos) % A[ele][0];
    if(ans_pos == 0) ans_pos+= A[ele][0];
    cout << A[ele][ans_pos] << endl;


}
