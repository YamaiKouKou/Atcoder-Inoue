#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int H,W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i,H) cin >> S[i];
    int up = 0; int bottom = H; int left = 0; int right = W;
    bool finish = false;
    for(int h = 0; h < H; ++h){
        for(int w = 0; w < W; ++w){
            if(S[h][w] == '#'){
                finish = true;
                break;
            }
        }
        if(finish) break;
        up++;
    }

    finish = false;
    for(int h = H-1; h >= 0; --h){
        for(int w = 0; w < W; ++w){
            if(S[h][w] == '#'){
                finish = true;
                break;
            }
        }
        if(finish) break;
        bottom--;
    }

    finish = false;

    for(int w = 0; w < W; ++w){
        for(int h = 0; h < H; ++h){
            if(S[h][w] == '#'){
                finish = true;
                break;
            }
        }
        if(finish) break;
        left++;
    }

    finish = false;

    for(int w = W-1; w >= 0; --w){
        for(int h = 0; h < H; ++h){
            if(S[h][w] == '#'){
                finish = true;
                break;
            }
        }
        if(finish) break;
        right--;
    }

    finish = false;

    for(int h = up; h < bottom; ++h){
        for(int w = left; w < right; ++w){
            cout << S[h][w];
        }
        cout << endl;
    }
}
