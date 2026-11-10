#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = count(s.begin(),s.end(),'i');
    ans += count(s.begin(),s.end(),'j');
    cout << ans << endl;
}