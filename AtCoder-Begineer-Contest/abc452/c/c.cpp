#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A_B;
    vector<vector<char>> possible(N);
 
    ll M;
    rep(i,N) {
        int A,B;
        cin >> A >> B;
        A--; B--;
        A_B.push_back(A*10+B);
    }
    cin >> M;
    vector<string> S(M);
    rep(j,M) {
        cin >> S[j];
        rep(k, A_B.size()){
            if((int)S[j].size() == (A_B[k]/10)+1) {
                possible[k].push_back(S[j][A_B[k]%10]);
            }
        }
    }

    rep(i,M){
        int flag = 0;
        rep(j,possible.size()){
            bool found = false;
            rep(k,possible[j].size()){
                if(S[i][j] == possible[j][k]) {
                    found = true;
                    break;
                }  
            }

            if(found) flag++;
        }

        if(flag == (int)S[i].size()) cout << "Yes" << endl;
        else cout << "No" << endl;
        flag = 0;
    }

}
