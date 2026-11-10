#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  int N,Q;
  cin >> N >> Q;
  vector<int> A(N);
  rep(i,N) cin >> A[];
  rep(qi,Q){
    int x,y;
    int count = 0;
    cin >> x >> y;
    rep(i,N){
        if(A[i]>x && A[i]<=x+y) count++;
    }
    cout << x+y+count-1 << endl;
  }
}
