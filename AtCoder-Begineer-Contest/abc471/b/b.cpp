#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    int ans = 0;
    cin >> N;
    vector<string> array_s(N);
    rep(i,N){
        string s;
        cin >> s;
        for(char& c : s){
            c = toupper(c);
        }
        array_s[i] = s;

    }

    for(int j = 0; j < N; ++j){
        int tmp = 1;
        for(int k = j; k < N; ++k){
            if(j == k) continue;
            else{
                if(array_s[j] == array_s[k]){
                    tmp++;
                }
            }
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;
}
