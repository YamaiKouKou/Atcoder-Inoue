#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> Wear(M,0);

    bool ans1 = true;
    bool ans2 = true;
    rep(i,N){
        int m;
        cin >> m;
        m--;
        Wear[m]++;
    }

    rep(j,M){
        if(Wear[j] > 1) {
            ans1 = false;
        }
        else{

        };
        if(Wear[j] < 1) ans2 = false;
    }

    if(ans1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    if(ans2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }



}
