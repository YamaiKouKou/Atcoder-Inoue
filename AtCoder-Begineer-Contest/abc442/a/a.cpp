#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int count = 0;
    cin >> S;
    for(char c: S){
        if(c == 'i' || c == 'j'){
            count++;
        }
    }
    cout << count << endl;
}
