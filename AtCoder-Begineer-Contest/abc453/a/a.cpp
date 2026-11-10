#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    if(S[0] == 'o'){
        int num = 1;
        while(S[num] == 'o'){
            num++;
        }
        for(int i = num; i < N; ++i) cout << S[i];
    }
    else cout << S << endl;
}
