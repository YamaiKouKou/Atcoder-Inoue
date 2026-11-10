#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    string S1,S2;
    cin >> S1 >> S2;
    if(S1 == "AD"){cout << "Yes" << endl;}
    else if(S1[1] == 'A' && S2[1] == 'D'){cout << "Yes" << endl;}
    else if(S2 == "DA"){cout << "Yes" << endl;}
    else if(S1[0] == 'A' && S2[0] == 'D'){cout << "Yes" << endl;}

    else if(S1 == "DA"){cout << "Yes" << endl;}
    else if(S1[1] == 'D' && S2[1] == 'A'){cout << "Yes" << endl;}
    else if(S2 == "AD"){cout << "Yes" << endl;}
    else if(S1[0] == 'D' && S2[0] == 'A'){cout << "Yes" << endl;}
    
    else cout << "No" << endl;
}
