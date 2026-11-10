#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    priority_queue<ll,vector<ll>,greater<ll>> sei;
    priority_queue<ll> fu;

    ll offset = 0;
    ll ans = 0;

    ll sei_top, fu_top;

    rep(i,N){
        ll a;
        cin >> a;
        if(a > 0){
            sei.push(a);
        }
        else{
            fu.push(a);
        }
    }

    for(int q = 0; q < N; ++q){
        bool flag = false;
        if(sei.empty()){
            sei_top = 1e10;
            flag = true;
        }
        else{
            sei_top = abs(sei.top() - offset);
        }

        if(fu.empty()){
            fu_top = 1e10;
            if(flag) break;
        }
        else{
            fu_top = abs(fu.top() - offset);
        }
        
        if(sei_top < fu_top){
            ans += sei_top;
            offset = sei.top();
            sei.pop();
        }
        else{
            ans += fu_top;
            offset = fu.top();
            fu.pop();
        }
    }

    cout << ans << endl;
}
