#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i < (n);++i)
using ll = long long;
using namespace std;

//int main(){
//    int N;
//    cin >> N;
//    vector<int> X(N);
//    ll ans = 1e6;
//    rep(i,N) cin >> X[i];
//    for(int i=0;i < 100;i++){
//        int sum = 0;
//        int P = i+1;
//        for(int j=0;j<N;j++){
//            sum += pow(P-X[j],2);
//        }
//        ans = min(ans,(ll)sum);
//        sum = 0;
//    }
//    cout << ans << endl;
//
//}


int main(){
    int N;
    cin >> N;
    vector<int> X(100,0); 
    int x;
    int sum = 0;
    int P = 0;
    ll ans = 0;
    rep(i,N) {
        cin >> x;
        x--;
        X[x]++;
    }

    rep(j,100) {
        if(sum>=N/2) {
            P = j+1;
            break;
        }
        else sum += X[j];
    }

    rep(l,100){
        ans += pow(P-(l+1),2)*X[l];
    }
    cout << ans << endl;
}