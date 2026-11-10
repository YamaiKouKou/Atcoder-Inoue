#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,L;
    cin >> N >> L;
    vector<int> A(N,0);
    int count = 0;
    for(int i=0;i<N;++i){
        int a;
        cin >> a;
        if(a>=L) count++;
    }
    cout << count << endl;
}