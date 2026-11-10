#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
    int N;
    int a;
    cin >> N;
    vector<int> A(100,0);
    rep(i,N){
        cin >> a;
        a--;
        A[a]++;
    }
    int count = 0;
    rep(j,100){
        if(A[j] > 0) count++;
    } 
    cout << count << endl;
    rep(j,100){
        if(A[j] > 0) {
            cout << j+1;
            if(j < 100) cout << " ";
        }
    }
}