#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main(){
    int a,b;
    cin >> a >> b;
    float x = a / sqrt(a*a+b*b);
    float y = b / sqrt(a*a+b*b);
    cout << fixed << setprecision(10) << x << " ";
    cout << fixed << setprecision(10) << y;
}