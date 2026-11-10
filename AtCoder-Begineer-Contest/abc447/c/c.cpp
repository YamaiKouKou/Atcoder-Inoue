#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    ll ans = 0;
    string S,T;
    cin >> S;
    cin >> T;
    string remove_S, remove_T;
    vector<int> SA_num(300005,0);
    vector<int> TA_num(300005,0);
    int tmp = 0;
    ll ssize = S.size();
    ll tsize = T.size();
    rep(i, ssize){
        if(S[i] != 'A') {
            remove_S.push_back(S[i]);
            tmp++;
        }
        else SA_num[tmp] += 1;
    }
    tmp = 0;
    rep(j, tsize){
        if(T[j] != 'A'){
            remove_T.push_back(T[j]);
            tmp++;
        }
        else TA_num[tmp] += 1;
    }

    if(remove_S == remove_T){
        if(S == T) cout << 0 << endl;
        else{
            rep(k, 300005){
                ans += abs(SA_num[k]-TA_num[k]);
            }
            cout << ans << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
}
