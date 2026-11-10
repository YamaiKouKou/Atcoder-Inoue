#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a = N/100;
    N = N % 100;
    int b = N/10;
    int c = N % 10;
    cout << b*100+c*10+a << " " << c*100+a*10+b;
}