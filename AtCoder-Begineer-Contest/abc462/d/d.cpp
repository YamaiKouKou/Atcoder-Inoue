#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,D;
    cin >> N >> D;
    vector<ll> S(N),T(N);
    vector<ll> Time(1000005);

    rep(i,N){
        int s,t;
        cin >> s >> t;
        S[i] = s; T[i] = t;
        Time[s]++;
        Time[t]--;
    }

    ll pre_num = 0;
    for(int j = 1; j <= 1e6; ++j){
        Time[j] += pre_num;
        pre_num = Time[j];
    }
    rep(k,30){
        cout << Time[k] << endl;
    }
}
