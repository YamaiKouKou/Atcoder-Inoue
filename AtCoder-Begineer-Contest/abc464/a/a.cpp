#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    int e_num = 0;
    int w_num = 0;
    for(char c:S){
        if(c == 'E') e_num++;
        else w_num++;
    }
    if(e_num > w_num) cout << "East" << endl;
    else cout << "West" << endl;
}
