#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    int sqn = sqrt(N);
    vector<ll> n;
    vector<ll> ans;
    for(int x=0;x<sqn;x++){
        for(int y=x+1;y<sqn;y++){
            ll x2 = pow(x+1,2);ll y2 = pow(y+1,2);
            if(x2+y2<=N) n.push_back(x2+y2);
        }
    }
    sort(n.begin(),n.end());

    if(n.size() > 0){
        int size = n.size();
        for(int j = 0; j < size; j++){
            if(j > 0){
                if(n[j-1] != n[j] && n[j] != n[(j+1)%size]) {
                    ans.push_back(n[j]);
                }
            }
            else{
                if(n[j] != n[j+1]) ans.push_back(n[j]);
            }       
        }
        size = ans.size();
        cout << size << endl;
        rep(i,size) {
            cout << ans[i];
            if(i != size-1){
                cout << " ";
            }
        } 
    }
    else{
        cout << 0 << endl;
    }
}
