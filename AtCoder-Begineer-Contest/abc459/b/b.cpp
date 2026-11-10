#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    rep(i,N){
        string s;
        cin >> s;
        int num = s[0] - 'a';
        if(num == 0 || num == 1 || num == 2) cout << 2;
        else if(num == 3 || num == 4 || num == 5) cout << 3;
        else if(num == 6 || num == 7 || num == 8) cout << 4;
        else if(num == 9 || num == 10 || num == 11) cout << 5;
        else if(num == 12 || num == 13 || num == 14) cout << 6;
        else if(num == 15 || num == 16 || num == 17 || num == 18) cout << 7;
        else if(num == 19 || num == 20 || num == 21) cout << 8;
        else if(num == 22 || num == 23 || num == 24 || num == 25) cout << 9;

    }
}
