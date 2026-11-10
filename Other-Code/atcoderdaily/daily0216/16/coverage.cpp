#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;
using namespace std;

int N,M;

int main(){
    cin >> N >> M;
    vector<int> mask(M,0);
    rep(i,M){
        int C;
        cin >> C;
        rep(j,C){
            int a;
            cin >> a;
            mask[i] |= (1 << (a - 1));
        }
    }

    int ans = 0;
    for(int i = 1; i < (1 << M); ++i){
        int combined_mask = 0;
        rep(j,M){
            if((i >> j) & 1){
                combined_mask |= mask[j];
            }
        }

        if(combined_mask == (1 << N) - 1){
            ans++;
        }
    }

    cout << ans << endl;
}