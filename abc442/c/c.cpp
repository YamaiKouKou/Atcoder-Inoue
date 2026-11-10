#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> A(M);vector<int> B(M);
    vector<vector<int>> relate(N,vector<int>(0));
    for(int i=0;i<M;i++){
        cin >> A.at(i) >> B.at(i);
        for(int j=0;j<N;j++){
            if(A.at(i) == j+1){
                relate[A.at(i)].push_back(B.at(i));
            }
        }
    }
    vector<int> ans(N);
    for(int l=0;l<N;l++){
        for(int k=0;k<relate.at(l).size();k++){
            cout << relate.at(l).at(k) << endl;
            if(k==relate.at(l).size()-1){
                cout << " ";
            }
        }
        cout << endl;
    }

    for(int a=0;a<N;a++){
        int num = N-(relate[a].size());
        if(num <3) ans.at(a) = 0;
        else ans.at(a) = ((num)*(num-1)*(num-2))/6;

        cout << ans.at(a) << " ";
    }
}
