#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N,M;
    cin >> N >> M;
    vector<bool> juice(M,true);
    vector<int> ans(N,0);
    for(int i = 0; i < N; ++i){
        bool watasu = true;
        int L;
        cin >> L;
        for(int j = 0; j < L; ++j){
            int k;
            cin >> k;
            k--;
            if(juice[k] && watasu){
                ans[i] = k+1;
                juice[k] = false;
                watasu = false;
            }
        }
    }

    rep(k,N) cout << ans[k] << endl;
}
