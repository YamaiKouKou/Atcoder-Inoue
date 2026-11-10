#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,M;
    int ans = 0;
    cin >> N >> M;
    vector<int> pep(M+1);
    vector<int> pep_lim(M+1);
    rep(i,M) cin >> pep[i];
    rep(j,N){
        int num, pep_val;
        cin >> num >> pep_val;
        num--;
        pep_lim[num] += pep_val;
    }
    rep(k,M){
        if(pep[k] <= pep_lim[k]){
            ans += pep[k];
        }
        else ans += pep_lim[k];
    }
    cout << ans << endl;
  
}
