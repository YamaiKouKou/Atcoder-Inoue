#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    sort(S.begin(),S.end());
    rep(i,S.size()){
        if(S[i] > '0'){
            char tmp = S[i];
            S[i] = S[0];
            S[0] = tmp;
            break;
        }
    }
    cout << S << endl;
}
