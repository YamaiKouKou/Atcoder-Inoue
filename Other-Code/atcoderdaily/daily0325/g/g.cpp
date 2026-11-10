// Reconstruct Chocolate
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main(){
    // H:板チョコの縦の長さ,W:板チョコの横の長さ,N:机に置かれたピースの数 を定義
    ll H,W;
    int N;
    // 入力をH,W,Nが受け取る
    cin >> H >> W >> N;
    // map[縦横の長さ]={i,i+1,...}で定義できるll,vector型のmap関数定義
    // i番目の縦横の長さh[i],w[i]を格納するll型vector定義
    // i番目のピースを使用済みかどうか格納するbool型vector定義
    // i番目のピースの配置(x,y)を格納するpair(ll型)のvector定義
    map<ll,vector<int>> map_h,map_w;
    vector<ll> h(N),w(N);
    vector<bool> used(N,false);
    vector<pair<ll,ll>> ans(N);
    // 探索する際の、条件を満たすピース番号格納するint型変数定義
    // ピースの配置座標(x,y)を格納するll型変数定義
    int target = 0;
    ll cur_x = 1;
    ll cur_y = 1;
    
    rep(i,N) {
        // N個のピースの縦横入力をh(N),w(N)が受け取る
        cin >> h[i] >> w[i];
        // map[縦横の長さ]={i}に対応するように要素追加
        map_h[h[i]].push_back(i);
        map_w[w[i]].push_back(i);
    }

    for(int j = 0; j < N; ++j){
        bool found = false;
        // 縦の長さHであるピースの番号について探索(該当するものがなくなるまでループ)
        while(!map_h[H].empty()){
            target = map_h[H].back();   // 一番後ろの要素取得
            map_h[H].pop_back();        // pop_backであればO(1)
            if(!used[target]){          // 条件を満たすピースがすでに使われている場合処理無効
                used[target] = true;
                found = true;

                ans[target] = {cur_x,cur_y};
                
                W -= w[target];
                cur_y += w[target];
                break;
            }
        }
        // 縦の長さHでの探索で条件を満たすものが見つかっている場合、
        // 1度の探索で2枚のピースを見つけてしまうためそれを防ぐbool型found
        if(found) continue;
        // 横の長さWであるピースの番号について探索(該当するものがなくなるまでループ)
        while(!map_w[W].empty()){
            target = map_w[W].back();   // 一番後ろの要素取得
            map_w[W].pop_back();        // pop_backであればO(1)
            if(!used[target]){          // 条件を満たすピースがすでに使われている場合処理無効
                used[target] = true;

                ans[target] = {cur_x,cur_y};
                
                H -= h[target];
                cur_x += h[target];
                break;
            }
        }
    }

    rep(k,N){
        cout << ans[k].first << " " << ans[k].second << endl;
    }
}