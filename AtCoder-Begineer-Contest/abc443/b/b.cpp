#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N,K;
    cin >> N >> K;
    int sum = 0;
    sum += N;
    int ans = 0;
    while(sum < K){
        ans++;
        sum += N + ans;
    }
    cout << ans << endl;
  
}
