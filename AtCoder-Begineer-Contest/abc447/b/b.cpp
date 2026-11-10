#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    vector<int> num(26);
    for(char c : S){
        int nu = c - 'a';
        num[nu]++;
    }
    int max = 0;
    for(int i = 0; i < 26; ++i){
        if(num[i] > max) max = num[i];
    }
    for(char c : S){
        int nunu = c - 'a';
        if(num[nunu] != max) cout << c ;
    }
}
