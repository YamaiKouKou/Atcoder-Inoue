#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> now(M);
    vector<int> next(M);
    rep(i,N){
        int A,B;
        cin >> A >> B;
        A--; B--;
        now[A]++;
        next[B]++;
    }

    rep(j,M){
        cout << next[j] - now[j] << endl;
    }


  
}
