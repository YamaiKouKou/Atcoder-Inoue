#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    string S;
    vector<int> A,B,C;
    cin >> S;
    ll ssize = S.size();
    ll ans = 0;
    rep(i,ssize){
        if(S[i] == 'A') A.push_back(i);
        else if(S[i] == 'B') B.push_back(i);
        else C.push_back(i);
    }
    ll asize = A.size();
    ll bsize = B.size();
    ll csize = C.size();
    rep(j,asize){
        rep(k,bsize){
            if(A[j] < B[k]){
                rep(l,csize){
                    if(B[k] < C[l]){
                        ans++;
                        B[k] = -1;
                        C[l] = -1;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << endl;

}
