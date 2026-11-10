#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> T(N);
    int ans = 0;
    rep(i,N) cin >> T[i];
    for(int i =0;i < 3; i++){
        int min_T = 300;
        for(int j = 0; j < N; j++){
            if(T[j] < min_T){
                ans = j;
                min_T = T[j];
            }
        }
        cout << ans+1;
        if(i < 2) cout << " ";
        T[ans] = 300;
    }
}
