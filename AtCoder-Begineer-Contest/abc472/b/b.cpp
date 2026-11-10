#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    ll left = 0;
    ll right = 0;
    ll dif = 1e6;
    vector<int> L(N);
    rep(i,N) {
        cin >> L[i];
        right += L[i];
    }
    rep(j,N){
        left += L[j];
        ll tmp = right - left;
        ll tmp2 = abs(tmp-left);
        dif = min(dif,tmp2);
    }
    cout << dif << endl;

}
