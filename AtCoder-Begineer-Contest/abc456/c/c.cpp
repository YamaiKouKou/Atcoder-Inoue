#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    char pre_c = 0;
    ll ans = 0;
    ll num = 0;
    for(char c : S){
        if(c == pre_c){
            num = 1;
        }
        else{
            num++;
        }
        ans += num;
        ans %= 998244353;
        pre_c = c;
    }
    cout << ans << endl;
}
