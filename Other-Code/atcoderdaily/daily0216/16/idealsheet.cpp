#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using namespace std;

int HA, WA, HB, WB, HX, WX;
vector<string> A,B,X;

bool check(int dai, int daj, int dbi, int dbj){
    // Xと同じ大きさの真っ白な盤面定義
    vector<string> S(HX, string(WX, '.'));

    // A上の条件を満たす#をプロット(条件を満たさない#があった場合即座に終了)
    for(int ai = 0; ai < HA; ++ai){
        for(int aj = 0; aj < WA; ++aj){
            if(A[ai][aj] == '#'){
                int ni = ai + dai; int nj = aj + daj;
                if(ni < 0 || ni >= HX || nj < 0 || nj >= WX){
                    return false;
                }
                S[ni][nj] = '#';
            }
        }
    }

    // B上の条件を満たす#をプロット(条件を満たさない#があった場合即座に終了)
    for(int bi = 0; bi < HB; ++bi){
        for(int bj = 0; bj < WB; ++bj){
            if(B[bi][bj] == '#'){
                int ni = bi + dbi; int nj = bj + dbj;
                if(ni < 0 || ni >= HX || nj < 0 || nj >= WX){
                    return false;
                }
                S[ni][nj] = '#';
            }
        }
    }
    
    return (S==X);
}

int main(){
    cin >> HA >> WA;
    A.resize(HA);
    rep(i,HA) cin >> A[i];

    cin >> HB >> WB;
    B.resize(HB);
    rep(i,HB) cin >> B[i];
    
    cin >> HX >> WX;
    X.resize(HX);
    rep(i,HX) cin >> X[i];

    for(int dai = -10; dai <= 10; ++dai){
        for(int daj = -10; daj <= 10; ++daj){
            for(int dbi = -10; dbi <= 10; ++dbi){
                for(int dbj = -10; dbj <= 10; ++dbj){
                    if(check(dai,daj,dbi,dbj)){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;

}