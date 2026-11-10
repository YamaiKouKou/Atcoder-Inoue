#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string s = "HelloWorld";
    int X;
    cin >> X;
    X--;
    rep(i,s.size()){
        if(i != X) cout << s[i];
    }
}
