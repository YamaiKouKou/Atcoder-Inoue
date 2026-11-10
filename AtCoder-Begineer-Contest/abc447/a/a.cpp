#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N,M;
    cin >> N >> M;
    if(N%2 == 0){
        if(N/2 >= M){
        cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    else{
        if((N/2)+1 >= M){
        cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
  
}
