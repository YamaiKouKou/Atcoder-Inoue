#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll func(int x){
    return (ll)x*x+2*x+3;
}

int main(){
    int t;
    cin >> t;
    ll ans = 0;

    ans = func(func(func(t)+t)+func(func(t)));
    cout << ans << endl;
}