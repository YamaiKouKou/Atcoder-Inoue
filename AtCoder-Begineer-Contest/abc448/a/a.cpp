#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    int X;
    cin >> N >> X;
    rep(i,N){
        int num;
        cin >> num;
        if(num < X){
            cout << 1 << endl;
            X = num;
        }
        else cout << 0 << endl;
    }
  
}
