#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int cou = count(s1.begin(),s1.end(),'.');
    cou += count(s2.begin(),s2.end(),'.');
    if(cou < 2 ){
        cout << "Yes" << endl;
    }
    else if(cou == 2){
        if((s1[0] == s2[1] && s1[0] == '.') || (s1[1] == s2[0] && s1[1] == '.')) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}