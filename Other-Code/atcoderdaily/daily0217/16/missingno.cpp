#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    int ans = 0;
    vector<int> A(N);
    for(int i=0;i<N;++i) cin >> A[i];
    sort(A.begin(),A.end());
    for(int j=0;j<N-1;++j){
        if(A[j] != A[j+1]+1) ans = A[j]+1;
    }
    cout << ans << endl;
}