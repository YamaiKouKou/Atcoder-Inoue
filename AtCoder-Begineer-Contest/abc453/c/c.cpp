#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    int ans = 0;
    cin >> N;
    ll pos = 3;
    rep(i,N){
        ll len;
        cin >> len;
        len = (len + 1)*2;
        if(pos > 0) {
            pos -= len;
            if(pos <= 2) ans++;
            //cout << len << endl;
        }
        else {
            pos += len;
            if(pos >= 2) ans++;
            //cout << len << endl;
        }
    }
    cout << ans << endl;
}
