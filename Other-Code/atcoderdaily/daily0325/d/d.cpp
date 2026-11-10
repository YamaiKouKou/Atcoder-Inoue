#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string T,U;
    cin >> T;
    cin >> U;
    for(int i = 0; i < (int)T.size()-(int)U.size()+1; ++i){
        bool ok = true;
        for(int j = 0; j < (int)U.size(); ++j){
            if(T[i+j] != U[j] && T[i+j] != '?'){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
