#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    ll N = 0;
    ll a = 0;ll b = 0;ll c = 0;
    ll ab = 0;ll ac = 0;
    ll ba = 0;ll bc = 0;ll ca = 0;ll cb = 0;
    ll ans = 0;
    string S;
    cin >> S;
    for(char chara : S){
        if(chara == 'a'){
            if(b > 0){
                ba += b;
            }
            if(c > 0){
                ca += c;
            }
            ans = ans + N + bc + cb + 1 - a;
            a++;
        }
        else if(chara == 'b'){
            if(a > 0){
                ab += a;
            }
            if(c > 0){
                cb += c;
            }
            ans = ans + N + ac + ca + 1 - b;
            b++;
        }
        else{
            if(a > 0){
                ac += a;
            }
            if(b > 0){
                bc += b;
            }
            ans = ans + N + ab + ba + 1 - c;
            c++;
        }
        ans %= 998244353;
        N++;
    }
    cout << ans << endl;
}
