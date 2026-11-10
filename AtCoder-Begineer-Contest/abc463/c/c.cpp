#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,Q;
    cin >> N;
    vector<ll> H(N),L(N);
    ll max = 0;
    rep(i,N){
        cin >> H[i] >> L[i];
    }
    cin >> Q;

    for(int j = N-1; j >= 0; j--){
        if(max < H[j]){
            max = H[j];
        }
        else{
            H[j] = max;
        }
    }
    
    rep(k,Q){
        ll T;
        cin >> T;
        T++;
        ll left = 0; ll right = N; ll mid = 0;
        while(right - left > 1){
            mid = left + ((right - left) / 2);
            if(L[mid] < T){
                left = mid;
            }
            else{
                right = mid;
            }
        }

        if(L[left] >= T){
            cout << H[left] << endl;
        }
        else{
            cout << H[right] << endl;
        }
    }
}
