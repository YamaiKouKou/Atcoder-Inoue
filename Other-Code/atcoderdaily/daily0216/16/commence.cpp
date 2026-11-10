#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;
using namespace std;

int main(){
    string S;
    vector<int> count(26);
    cin >> S;
    for(char c : S){
        count[c - 'a']++;
    }
    rep(i,100){
        int num = 0;
        rep(j,26){
            if(count[j] == i+1){
                num++;
            }
        }
        if(num == 0 || num == 2){
            continue;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}