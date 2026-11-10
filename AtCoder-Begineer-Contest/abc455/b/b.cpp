#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int H,W;
    cin >> H >> W;
    vector<string> grid(H);
    rep(i,H) cin >> grid[i];
    int ans = 0;

    for(int h1 = 0; h1 < H; ++h1){
        for(int w1 = 0; w1 < W; ++w1){

            for(int h2 = h1; h2 < H; ++h2){
                for(int w2 = w1; w2 < W; ++w2){

                    bool ok = true;

                    for(int i = h1; i <= h2; ++i){
                        for(int j = w1; j <= w2; ++j){
                            if(grid[i][j] != grid[h1+h2-i][w1+w2-j]){
                                ok = false;
                                break;
                            }
                        }
                        if(!ok) break;
                    }

                    if(ok) ans++;

                }
            }
        }
    }
    cout << ans << endl;

}
