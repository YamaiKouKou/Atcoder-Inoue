#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(){
    int N,M,K;
    cin >> N >> M >> K;
    vector<vector<ll>> dp(N+1, vector<ll>(K+1,0));
    
    dp[0][0] = 1; //初期値

    for(int i = 0;i < N; i++){ //i個のサイコロを振った
        for(int j = i; j <= K; j++){ //i個振った合計値がj
            if(dp[i][j] == 0){ //dp[i][j]が0の時加算しても一つ前の状態は更新されないため省略
                continue;
            }
            for(int l = 0; l < M; l++){ //次のサイコロ振った時の値
                int dice_val = l+1; //実際のサイコロの値は1からMの範囲のため1加算する必要あり
                if(j+dice_val <= K){
                    dp[i+1][j+dice_val] = (dp[i+1][j+dice_val] + dp[i][j]) % 998244353;
                }
            }
        }
    }

    ll ans = 0;

    for(int i = N;i <= K; i++){
        ans = (ans +dp[N][i]) % 998244353;
    }
    cout << ans;

}