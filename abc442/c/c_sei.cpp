#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); ++i)
using ll = long long;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> deg(n);

    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--;b--;
        deg[a]++;
        deg[b]++;
    }

    rep(i,n){
        ll x = n-1-deg[i];
        ll ans = x*(x-1)*(x-2)/6;
        cout << ans << endl;
    }
}