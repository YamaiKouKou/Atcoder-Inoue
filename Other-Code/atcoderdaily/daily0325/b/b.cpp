#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    int num1 = (char)S[0] - '0';
    int num2 = (char)S[2] - '0';
    if(num2 > 7){
        num1++;
        num2 = 0;
    }
    cout << num1 << '-' << num2+1;
}
