#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,Q;
    //int ans = 0;
    int base = 0;
    cin >> N >> Q;
    vector<int> A(N,0);
    rep(i,Q){
        int q,x;
        cin >> q;
        if(q == 1){
            cin >> x;
            x--;
            A[x]++;
        }
        else{
            base++;
        }

        for(int j = 0; j < N; ++j){
            int val = A[j]-base;
            if(val < 0) val = 0;
            cout << val << " ";
        }
        cout << endl;
    }   
}
