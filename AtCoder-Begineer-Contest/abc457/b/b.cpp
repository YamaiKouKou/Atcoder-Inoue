#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> num(N);
    int X,Y;

    rep(i,N){
        int L;
        cin >> L;
        rep(j,L){
            int arrnum;
            cin >> arrnum;
            num[i].push_back(arrnum);
        }
    }

    cin >> X >> Y;
    X--; Y--;
    cout << num[X][Y] << endl;
}
