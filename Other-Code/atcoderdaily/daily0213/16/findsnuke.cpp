#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(){
    int h,w;
    cin >> h >> w;
    int ans_h=0;int ans_w=0;int dh=0;int dw=0;
    bool ok = false;
    vector<vector<char>> str(h, vector<char>(w)); 
    for(int i = 0; i < h; ++i){ //h個の文字列
        for(int j = 0; j < w; ++j) { //長さwの文字列
            cin >> str[i][j];
        }
    }

    for(int i = 0; i < h; ++i){ //h個の文字列
        for(int j = 0; j < w; ++j) { //長さwの文字列
            if(str[i][j] == 'u'){
                //uの周辺8マスのどの方向にkが存在するか探索
                for(int k = -1; k <= 1; ++k){
                    for(int l = -1; l <= 1; ++l){
                        if(k == 0 && l == 0) continue; //u自身の座標
                        else if(i+k-2<0 || i+k+2 >= h || j+l-2<0 || j+l+2>=w) continue; //境界条件
                        else{
                            if(str[i+k][j+l] == 'k' && str[i+2*k][j+2*l] == 'e' && str[i+(-1)*k][j+(-1)*l] == 'u' && str[i+(-2)*k][j+(-2)*l] == 's'){
                                ans_h = i;
                                ans_w = j;
                                dh = k;
                                dw = l;

                                ok = true;
                                break;
                            }
                        }
                    }
                    if(ok) break;
                }
            }
            if(ok) break; 
        }
        if(ok) break;
    }

    for(int a = -2; a <= 2; ++a){
        cout << ans_h+a*dh << " " << ans_w+a*dw << endl;
    }
}