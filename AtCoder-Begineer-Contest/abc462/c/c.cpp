#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    ll min_pos = 1e8;
    int ans = 0;
    cin >> N;
    vector<ll> pos(N);
    rep(i,N){
        ll x,y;
        cin >> x >> y;
        x--;
        pos[x] = y;
    }

    rep(j,N){
        if(pos[j] < min_pos){
            ans++;
            min_pos = pos[j];
        }
    }
    cout << ans << endl;
}
