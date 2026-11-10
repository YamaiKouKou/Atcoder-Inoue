#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N,M;
    cin >> N >> M;
    string S,T;
    cin >> S >> T;
    vector<char> s(N),t(M);
    rep(i,N) s[i] = S[i]; 
    rep(j,M) t[j] = T[j];
    int min_ans = 1e6;

    for(int k = 0; k < N-M+1; k++){
        int ans = 0;
        for(int l = 0; l < M; l++){
            if(s[k+l]-t[l] < 0) ans += 10 - (-1)*(s[k+l]-t[l]);
            else ans += s[k+l]-t[l];
        }
        min_ans = min(min_ans,ans);
    }
    cout << min_ans << endl;
}
