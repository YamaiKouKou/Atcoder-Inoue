#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int Q;
    cin >> Q;

    map<string,int> bank_id;
    int id = 1;
    rep(i,Q){
        string s;
        cin >> s;
        if(bank_id[s] == 0){
            bank_id[s] = id;
            id++;
        }
        cout << bank_id[s] << endl;
    }
}
