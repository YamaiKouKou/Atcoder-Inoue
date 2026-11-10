#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    ll ans = 0;
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N){
        cin >> A[i]; 
    }
    //大きい餅から順番にみていく
    for(int j = N-1; j >= 1; --j){
        ll target = A[j] / 2; //A[j]の半分以下(小さい餅)の最大のインデックスを探す
        int left = 0;
        int right = j-1;
        int pos = -1;

        while(left <= right){
            int mid = (left+right) / 2;
            if(A[mid] <= target){
                pos = mid; //この時だけmidは問題文の条件を満たしているため、暫定としてposを更新する
                left = mid+1;
            }else{
                //この時はmidは条件を満たしていないため、posを更新しちゃうとこのままwhileを終了してしまい誤ったposになる可能性がある
                right = mid-1;
            }
        }

        if(pos != -1){
            ans += (pos+1); 
        }
    } 
    cout << ans << endl;

}
