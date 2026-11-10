#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

void solve(){
    int N,W;
    cin >> N >> W;
    int ww = W*2;
    int sum = 0;
    int ans = 0;
    vector<int> cost(N);
    vector<int> pilecost(ww);
    rep(i,N){
        cin >> cost[i];
        pilecost[i%ww] += cost[i];
    }
    for(int j = 0; j < ww; j++){
        if(j==0) {
            rep(iw,W) sum += pilecost[iw];
            ans = sum;
        }
        else {
            sum -= pilecost[(j-1)%ww];
            sum += pilecost[(j+W-1)%ww];
        }
        ans = min(sum,ans);
    }
    cout << ans << endl;
}

int main(){
    int T;
    cin >> T;
    rep(it,T) solve();
}