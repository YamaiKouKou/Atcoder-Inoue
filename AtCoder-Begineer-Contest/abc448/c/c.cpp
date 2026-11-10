#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

map<ll,ll> map_A;
vector<ll> vec_A;
int N;

void solve(int k_num){
    vector<ll> B(k_num);
    vector<ll> minarray;
    ll min = 1e10;
    rep(i,k_num) cin >> B[i];
    rep(j,k_num){
        rep(k,k_num){
            if(map_A[vec_A[j]] == B[k]){
                continue;
            }
            min = vec_A[j];
        }
    }
    cout << min << endl;

}

int main() {
    int Q;
    cin >> N >> Q;
    vec_A.resize(N);
    rep(i,N){
        int a_num;
        cin >> a_num;
        map_A[a_num] = i;
        vec_A[i] = a_num;
    }
    sort(vec_A.begin(),vec_A.end());

    rep(j,Q){
        int K;
        cin >> K;
        solve(K);
    }

}
