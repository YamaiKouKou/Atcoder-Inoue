#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,Q;
    cin >> N >> Q;
    int q,x,l,r;
    int sum = 0;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    for(int j=0;j<Q;j++){
      cin >> q;
      if(q == 1){
        cin >> x ;
        cout << endl << x; 
        swap(A.at(x),A.at(x+1));
      }
      else{
        cin >> l >> r;
        for(int k=l;k<r;k++){
            sum += A.at(k);
        }
        cout << sum << endl;
      }
    }
    for(int i=0;i<N;i++){
        cout << A.at(i);
    }
  
}
