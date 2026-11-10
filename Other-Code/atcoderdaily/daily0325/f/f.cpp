#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    ll odd_ans = 0;
    ll even_ans = 0;
    bool even_exi = false;
    bool odd_exi = false;
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    sort(A.begin(),A.end());

    int flag = 0;
    
    for(int i = A.size()-1; i >= 0; --i){
        if(A[i] % 2 == 0){
            even_ans += A[i];
            flag++;
            if(flag >= 2){
                even_exi = true; 
                break;
            }
        }
    }

    flag = 0;

    for(int i = A.size()-1; i >= 0; --i){
        if(A[i] % 2 == 1){
            odd_ans += A[i];
            flag++;
            if(flag >= 2){
                odd_exi = true; 
                break;
            }
        }
    }

    if(!even_exi && !odd_exi) cout << -1 << endl;
    else{
        if(even_ans <= odd_ans) cout << odd_ans << endl;
        else cout << even_ans << endl;
    }
}
