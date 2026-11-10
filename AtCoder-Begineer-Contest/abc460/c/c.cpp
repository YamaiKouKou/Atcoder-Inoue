#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,M;
    int ans = 0;
    cin >> N >> M;
    priority_queue<ll> shari, neta;
    rep(i,N){
        ll a;
        cin >> a;
        shari.push(a);
    }
    rep(j,M){
        ll b;
        cin >> b;
        neta.push(b);
    }

    while(!neta.empty()){
        ll fish = neta.top();
        ll rice = shari.top();
        
        if(fish <= 2 * rice){
            ans++;
            shari.pop();
            neta.pop();
        }
        else{
            neta.pop();
        }

        if(shari.empty()){
            break;
        }
    }
    
    cout << ans << endl;
}
