#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i < (n);++i)
using ll = long long;
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int ans=0;
    int num=1;
    for(int i=0;num<b;i++){
        num+= a-1;
        ans++;
        //cout << num << endl;
    }
    cout << ans << endl;
}