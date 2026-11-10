#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

vector<int> keta(20,0);

string Binary(int num){
    string b;
    while(num >= 1){
        string n = to_string(num % 2);
        b = b + n;
        num /= 2;
    }
    if(b == "") return "0";
    return b;
}

void Tasu(string binary){
    for(int ele = 0;ele < (int)size(binary); ++ele){
        keta[ele] += binary[ele] - '0';
    }
}

void Hiku(string binary){
    for(int ele = 0;ele < (int)size(binary); ++ele){
        keta[ele] -= binary[ele] - '0';
    }
}

int main() {
    int N,Q;
    cin >> N >> Q;
    vector<int> A(N,0);
    int base = 0;
    rep(i,Q){
        int ans = 0;
        int q,x,a;
        cin >> q;
        if(q == 1){
            cin >> x;
            x--;
            if(A[x]-base>=0) a = A[x]-base;
            else a = 0;
            string stra = Binary(a);
            Hiku(stra);
            A[x]++; a++;
            stra = Binary(a);
            Tasu(stra);
        }
        else{
            base++;
            int val = 0;
            vector<int> tmp(20,0);
            for(int j = 19;j >= 0; --j){
                tmp[j] = val;
                val += keta[j];
                keta[j] = tmp[j];
            }
        }

        ll num = 1;
        for(int k = 0;k < 20; ++k){
            if(keta[k] % 2 == 1){
                ans += num;
            }
            num *= 2;
        }
        cout << ans << endl;
    }   
}
