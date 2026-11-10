#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;
using namespace std;

int main(){
    int N;
    int a = 0;
    cin >> N;
    vector<int> A;
    rep(i,N){
        cin >> a;
        A.push_back(a);
        int siz = A.size();
        if(siz >= 4 && A[siz-1] == A[siz-2] && A[siz-2] == A[siz-3] && A[siz-3] == A[siz-4]){
            rep(j,4){
                A.pop_back();
            }
        }
    }
    cout << A.size() << endl;
}