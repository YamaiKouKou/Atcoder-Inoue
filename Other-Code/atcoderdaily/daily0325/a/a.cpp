#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    float temp;
    cin >> temp;
    if(temp >= 38.0){
        cout << 1;
    }else if(temp >= 37.5 && temp < 38.0){
        cout << 2;
    }else{
        cout << 3;
    }
}
