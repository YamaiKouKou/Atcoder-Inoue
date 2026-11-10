#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
void solve(){
    int n,w;
    cin >> n >> w;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    int w2 = w*2;

    vector<ll> d(w2);
    rep(i,n) d[i%w2] += c[i];

    rep(i,w2) d.push_back(d[i]);

    ll sum = 0;
    rep(i,w) sum += d[i];
    ll ans = sum;
    rep(i,w2){
        sum -= d[i];
        sum += d[i+w];
        ans = min(ans,sum);
    }
    cout << ans << endl;

}

int main() {
    int T;
    cin >> T;
    rep(ti,T) solve();
}
