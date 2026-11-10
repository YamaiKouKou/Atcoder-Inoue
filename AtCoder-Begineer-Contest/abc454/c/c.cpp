#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;


int main() {
    int N,M;
    int ans = 0;
    cin >> N >> M;
    vector<bool> used(300005,false);
    vector<pair<int,int>> A_B(M);
    rep(i,M){
        int A,B;
        cin >> A >> B;
        A--; B--;
        /*
        if(A>B){
            int tmp = A;
            A = B;
            B = tmp;
        }*/
        A_B[i] = {A,B};
    }

    sort(A_B.begin(),A_B.end());

    used[0] = true;

    rep(j,M){
        if(used[A_B[j].first]){
            if(!used[A_B[j].second]){
                ans++;
                used[A_B[j].second] = true;
            }
        }
    }

    cout << ans+1 << endl;
}
