#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N);
    rep(i,N){
        int L;
        cin >> L;
        vector<int> a(L);
        rep(j,L) cin >> a[j];
        vector<int> rev_a = a;
        reverse(rev_a.begin(), rev_a.end());
        if (a < rev_a) A[i] = a;
        else A[i] = rev_a;
    }

    sort(A.begin(),A.end());
    int ans = 0;
    rep(i,N){
        if(i == 0 || A[i] != A[i-1]) ans++;
    }
    cout << ans << endl;

}
