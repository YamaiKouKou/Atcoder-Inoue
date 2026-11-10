#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,K;
    int left = 0;
    int right = 0; int pre_right = 0;
    int ans = 0;
    cin >> N >> K;
    vector<int> A(N);
    rep(i,N) cin >> A[i];
    for(int ele = 1; ele < N; ++ele){
        left = A[ele-1]; right = A[ele];
        if((left <= K && K <= right) || (left >= K && K >= right)){
            if(pre_right != K) ans++;
        }
        pre_right = right;
    }
    cout << ans;
}
