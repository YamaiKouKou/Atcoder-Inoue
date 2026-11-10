#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; ++i){
        cin >> A[i];
    }
    int X;
    cin >> X;
    for(int j = 0; j < N; ++j){
        if(A[j] == X) {cout << "Yes" << endl; return 0;}
    }
    cout << "No" << endl;
}