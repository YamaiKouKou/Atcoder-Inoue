#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

vector<pair<ll,ll>> sixA;
int N;

void solve(){
    int K;
    cin >> K;
    vector<int> B(K);
    rep(i,K) {
        int num;
        cin >> num;
        num--; // 0-indexed に変換
        B[i] = num;
    }

    for(auto& ele : sixA){
        bool removed = false;
        rep(j,K){
            if(B[j] == ele.second){
                removed = true;
                break;
            }
        }
        if(!removed){
            // endl ではなく '\n' を使うのが高速化のコツ
            cout << ele.first << '\n'; 
            break;
        }
    }
}

int main() {
    // 【修正】標準入出力の高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    if (!(cin >> N >> Q)) return 0; // 入力失敗防止

    rep(i,N){
        ll a_num;
        cin >> a_num;
        // ペアを入れる {値, インデックス}
        sixA.push_back({a_num, i});
        // 挿入ソートの代わりの sort。要素数が常に 7 以下なので O(1) と同等
        sort(sixA.begin(),sixA.end());
        // 7番目以降（値が大きいボール）を捨てる
        if(sixA.size() > 6) sixA.pop_back();
    }

    rep(j,Q){
        solve();
    }
    return 0;
}