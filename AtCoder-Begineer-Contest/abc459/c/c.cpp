#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    ll N,Q;
    cin >> N >> Q;
    vector<ll> atleast(600005,0);   // 高さh以上のブロックを持つマスの数
    vector<ll> freq(600005,0);      // 高さhのブロックを持つマスの数
    vector<ll> height(300005,0);    // マスxの高さ 

    freq[0] = N;        // 最初はすべてのマスが高さ0
    atleast[0] = N;     // 最初はすべてのマスが高さ0以上
    int ground = 0;     // 基準点は0

    rep(i,Q){
        int q;
        cin >> q;
        if(q == 1){
            ll x;
            cin >> x;   // x番目
            x--;        // 0-indexed
            freq[height[x]] -= 1;   // 現在のマスxの高さグループを1減算
            height[x] += 1;         // マスxの高さを1加算
            freq[height[x]] += 1;   // 加算後のマスxの高さグループを1加算

            atleast[height[x]] += 1;// マスxの高さを持つものが1増えた(仮にマスxが今の高さより大きくなったとて数は減らない)

            if(freq[ground] == 0){// 今の基準点の高さグループが0になった場合1引き上げる
                ground++;
            }
        }
        else{
            ll y;
            cin >> y;   // y以上
            cout << atleast[y+ground] << endl;// 高さが(y+基準点)以上であるマスの個数出力
        }
    }
}
