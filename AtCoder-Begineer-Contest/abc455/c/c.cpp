#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,K;
    ll ans = 0;
    cin >> N >> K;
    map<ll,ll> map_a;
    priority_queue<ll,vector<ll>,greater<ll>> que_a;
    
    rep(i,N){
        ll num;
        cin >> num;
        map_a[num] += num;
    }

    for(auto p: map_a){
        que_a.push(p.second);
    }

    ll knum = 0;

    while(!que_a.empty()){
        if(knum >= int(map_a.size())-K){
            break;
        }
        ans += que_a.top();
        que_a.pop();
        knum++;
    }
    cout << ans << endl;

}
