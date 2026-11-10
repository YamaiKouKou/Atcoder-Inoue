#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> C(N+1,vector<int>(N+1));
    for(int i = 1; i <= N-1; i++){
        for(int j = i+1; j <= N; j++){
            cin >> C[i][j];
        }
    }

    for(int a = 1; a < N; a++){
        for(int b = a; b < N;b++){
            for(int c = b; c <= N; c++){
                if(C[a][c] > C[a][b]+C[b][c]) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}
