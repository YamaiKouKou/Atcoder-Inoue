#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<ll> A(N,0);
    vector<ll> B(N-1,0);
    rep(i,N) cin >> A[i];
    rep(j,N-1) cin >> B[j];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int offset = 0; // 箱のポインタをズラすための変数
    ll ans = -1;

    // 大きい方から順番に見ていく
    for (int i = N - 1; i >= 0; --i) {
        int j = i - 1 + offset; // 本来あるべき箱のインデックス

        if (j >= 0 && A[i] <= B[j]) {
            // 箱に入るなら、そのまま次のペアへ
            continue;
        } else {
            // 箱に入らない場合
            if (offset == 0) {
                // 1回目のはみ出し：この A[i] 用に箱を買う
                ans = A[i];
                offset = 1; // 以降、箱のインデックスを1つズラして（温存して）比較する
            } else {
                // 2回目のはみ出し：もう無理！
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << ans << endl;
}