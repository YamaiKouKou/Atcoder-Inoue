#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> sta;
    rep(i,N){
        int a;
        cin >> a;
        sta.push_back(a);
        if(sta.size() >= 4 && sta[sta.size()-1] == sta[sta.size()-2] && sta[sta.size()-1] == sta[sta.size()-3] && sta[sta.size()-1] == sta[sta.size()-4]){
            rep(j,4) sta.pop_back();
        }
    }
    cout << sta.size() << endl;
}
