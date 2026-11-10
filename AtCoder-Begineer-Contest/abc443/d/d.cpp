#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

void solve(){
    int N;
    cin >> N;
    vector<int> R(N);
    rep(i,N) cin >> R[i];
    int count = 0;
    for(int j =1;j < N;j++){
        int d = abs(R[j] - R[j-1]);
        if(d > 1) {
            count += d-1;
            if(R[j] - R[j-1] < 0) R[j-1] -= d-1;
            else if(R[j] - R[j-1] > 0) R[j] -= d-1;
        }
    }
    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i,T) solve();
}
