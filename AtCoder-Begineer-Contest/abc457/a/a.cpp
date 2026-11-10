#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    
    cin >> N;
    vector<int> num(N);
    rep(i,N) cin >> num[i];
    int ans;
    cin >> ans;
    ans--;
    cout << num[ans] << endl;
}
