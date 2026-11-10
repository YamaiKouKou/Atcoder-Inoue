#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
    int N;
    cin >> N;
    vector<int> h(N);
    rep(i,N) cin >> h[i];
    int count = 0;
    
    while(1){
        int i = 0;
        if(h[i] == 0) {
            i++;
        }
        else{
            h[i]--;
            i++;
            if(h[i+1] == 0 && i+1 < N) count++;
            if(i > 100) break;
        }
    }
    cout << count << endl;
}