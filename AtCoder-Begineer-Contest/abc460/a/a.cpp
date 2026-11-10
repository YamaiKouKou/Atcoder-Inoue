#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,M;
    int cnt = 0;
    cin >> N >> M;
    while(M > 0){
        M = N % M;
        cnt++;
    }
    cout << cnt << endl;
}
