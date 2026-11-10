#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    vector<int> N(S.size());
    int i = 0;
    for(char c : S){
        N[i] = c-'0';
        i++;
    }
    sort(N.begin(),N.end());
    if(N[0] == 0){
        int tmp = N[0];
        N[0] = N[1];
        N[1] = tmp;
    }
    rep(j,N.size()) cout << N[j];
}
