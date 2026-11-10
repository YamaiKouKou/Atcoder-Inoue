#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    int max = 0;
    vector<int> cnt(N,0);
    rep(i,N){
        int c;
        cin >> c;
        c--;
        cnt[c]++;
    }

    rep(j,N){
        if(max < cnt[j]){
            max = cnt[j];
        }
    }

    cout << N - max << endl;

}
