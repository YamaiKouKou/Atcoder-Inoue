#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    vector<int> s(n+1);
    rep(i,n) s[i+1] = s[i] + a[i];

    rep(qi,q){
        int type;
        cin >> type;
        if(type==1){
            int x;
            cin >>x;
            s[x] += a[x]-a[x-1];
            swap(a[x-1],a[x]);
        }
        if(type==2){
            int l,r;
            cin >> l >> r;
            --l;
            int ans = s[r]-s[l];
            cout << ans << '\n';
        }
    }
}