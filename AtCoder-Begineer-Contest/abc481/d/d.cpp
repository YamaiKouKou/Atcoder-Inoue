#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int arrive_num(vector<vector<int>> &Con_Planet, int s, int T){
    if(s > 200005){
        return 0;
    }
}

int main() {
    int N,M,S,T;
    cin >> N >> M >> S >> T;

    vector<int> A(M),B(M),Con_MinPlanet(N+1, 1e10);
    vector<vector<int>> Con_Planet(N+1);
    int search = 0;

    rep(i,M){
        cin >> A[i] >> B[i];
        Con_Planet[A[i]].push_back(B[i]);
        if(B[i] < Con_MinPlanet[A[i]]) Con_MinPlanet[A[i]] = B[i];
    }

    cout << arrive_num(Con_Planet, search, T);
    
}
