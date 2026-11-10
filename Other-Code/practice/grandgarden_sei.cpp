#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    int pre_h = 0;
    vector<int> h(N);
    rep(i,N) cin >> h[i];
    for(int j = 0;j < N; j++){
        if(h[j] > pre_h){
            ans += h[j]- pre_h;
        }
        pre_h = h[j];
    }
    cout << ans << endl;
}