#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main(){
    int a,b;
    int ans = 0;
    rep(i,9){
        cin >> a;
        ans += a;
    }
    rep(j,8){
        cin >> b;
        ans -= b;
    }
    cout << ans+1 << endl;

}