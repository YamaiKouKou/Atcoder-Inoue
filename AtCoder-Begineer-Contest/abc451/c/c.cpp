#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    vector<vector<ll>> tree;
    vector<ll> cut_tree;
    int Q;
    int ans = 0;
    int part = 0;
    cin >> Q;
    tree.resize(Q);

    rep(i,Q){
        int q;
        ll h;
        cin >> q >> h;
        if(q == 1) tree[part].push_back(h);
        else cut_tree.push_back(h);
    }
    part = 0;
    rep(j,Q){
        while(!tree[part].empty()){
            for(ll num : tree[part]){
                if(num <= cut_tree[part]) ans--;
                else ans++;
            }
        }
        cout << ans << endl;
        part++;
    }
  
}