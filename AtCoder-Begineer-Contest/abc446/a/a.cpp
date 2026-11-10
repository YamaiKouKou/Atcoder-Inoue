#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    string s1;
    cin >> s1;
    string s2 = s1;

    for(int i = 0; i < s1.size();++i){
        s2[i] = tolower(s1[i]);
    }
    cout << "Of" + s2 << endl;
}
