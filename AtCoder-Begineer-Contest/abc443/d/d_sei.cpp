#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> r(n);
    rep(i,n) cin >> r[i];

    vector<int> t = r;
    rep(i,n-1) t[i+1] = min(t[i+1], t[i]+1);
    for (int i = n-1; i > 0; i--){
        t[i-1] = min(t[i-1], t[i]+1);
    }
    ll ans = 0;
    rep(i,n) ans += r[i]-t[i];
    cout << ans << endl;
}

int main(){
    int T;
    cin >> T;
    rep(ti,T) solve();
}