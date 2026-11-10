#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    char x;
    cin >> N >> x;
    int x_num = x - 'A';
    string S;
    vector<int> Seat(5,0);
    rep(i,N){
        cin >> S;
        rep(j,5){
            if(S[j] == 'o'){
                Seat[j]++;
            }
        }
    }
    if(Seat[x_num] > 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
