#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i < (n); ++i)
using ll = long long;

int sum_range(int a, int b){
    if(a==b) return a;
    else return sum_range(a,b-1)+b;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << sum_range(a,b) << endl;
}
