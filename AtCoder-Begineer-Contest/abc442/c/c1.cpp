#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);++i)
using ll = long long;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> relate(N,0);
    int a,b;
    rep(i,M){
        cin >> a >> b;
        relate[a-1] += 1;
        relate[b-1] += 1;
    }
    rep(j,N){
        ll num = N-relate[j]-1;
        ll ans = ((num)*(num-1)*(num-2)) / 6;
        cout << ans << " ";
    }
}