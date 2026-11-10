#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    map<ll,int> tree;
    int Q;
    int ans = 0;

    cin >> Q;

    rep(i,Q){
        int q;
        ll h;
        cin >> q >> h;

        if(q == 1) {
            tree[h]++;
            ans++;
        }
        else{
            while(!tree.empty() && tree.begin()->first <= h){
                ans -= tree.begin()->second;
                tree.erase(tree.begin()->first);
            }
        }
        cout << ans << endl;
    }
}