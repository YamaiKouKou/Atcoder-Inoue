#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,K,M;
    cin >> N >> K >> M;
    vector<pair<ll,ll>> V_C(N);
    ll ans = 0;

    rep(i,N){
        int c;
        ll v;
        cin >> c >> v;
        V_C[i] = {v,c};
    }

    sort(V_C.rbegin(),V_C.rend());

    
}
