#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int X,Y,L,R,A,B;
    int ans = 0;
    cin >> X >> Y >> L >> R >> A >> B;
    for(int h = A+1; h <= B; ++h){
        if(h > L && h <= R){
            ans += X;
        }
        else ans += Y;
    }
    cout << ans << endl;
}
