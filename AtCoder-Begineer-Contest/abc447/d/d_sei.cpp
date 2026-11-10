#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    ll a_num = 0; //まだBとペアになってないAの数
    ll ab_num = 0; //AとペアになったがCとペアになってないBの数
    ll ans = 0;
    for(int i = 0; i < (int)S.size(); ++i){
        if(S[i] == 'A'){
            //Aの時の処理
            a_num++;
        }
        else if(S[i] == 'B'){
            //Bの時の処理
            if(a_num > 0){
                a_num--;
                ab_num++;
            }
        }
        else{
            //Cの時の処理
            if(ab_num > 0){
                ab_num--;
                ans++;
            }
        }
    }
    cout << ans << endl;

}
