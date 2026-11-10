#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int T;
    cin >> T;
    rep(i,T){
        ll x1,y1,r1,x2,y2,r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        ll dif_x = abs(x2-x1);
        ll dif_y = abs(y2-y1);
        ll squ_r = r1*r1 + 2*r1*r2 + r2*r2;
        if(squ_r >= dif_x*dif_x + dif_y*dif_y){
            if(abs(r1-r2) > sqrt(dif_x*dif_x + dif_y*dif_y)){
                cout << "No" << endl;
            }
            else cout << "Yes" << endl;
        } 
        else{
            cout << "No" << endl;
        }
    }
}
