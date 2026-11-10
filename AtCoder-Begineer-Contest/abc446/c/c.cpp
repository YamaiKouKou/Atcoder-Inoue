#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

void solve(){
    int N,D;
    cin >> N >> D;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> egg;
    rep(i,N) cin >> A[i];
    rep(j,N) cin >> B[j];

    for(int k = 0; k < N; ++k){
        egg.push_back(A[k]); //朝
        if(egg[0]-B[k]>0){
            egg[0] -= B[k];
        }
        else{
            egg.erase(egg.begin());
            int val = B[k]-egg[0];
            egg[0] -= val;
        } //昼

        int siz = egg.size(); 
        if(siz > D) {
            egg.erase(egg.begin()); //夜
        }
    }

    int ans = 0;
    int siz = egg.size();
    for(int l = 0;l < siz; ++l){
        ans += egg[l];
    }
    cout << ans << endl;

}

int main() {
    int T;
    cin >> T;
    rep(i,T) solve();
}
