#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    vector<vector<int>> dice(3,vector<int>(6,0));

    rep(i,2){
        rep(j,5){
            int num;
            cin >> num;
            num--;
            dice[i][num]++;
        }
    }
    float possibility = 0.0;
    possibility += float(dice[0][3] / 6) * float(dice[1][4] / 6) * float(dice[2][5] / 6);
    possibility += float(dice[0][3] / 6) * float(dice[1][5] / 6) * float(dice[2][4] / 6);
    possibility += float(dice[0][4] / 6) * float(dice[1][3] / 6) * float(dice[2][5] / 6);
    possibility += float(dice[0][4] / 6) * float(dice[1][5] / 6) * float(dice[2][3] / 6);
    possibility += float(dice[0][5] / 6) * float(dice[1][3] / 6) * float(dice[2][4] / 6);
    possibility += float(dice[0][5] / 6) * float(dice[1][4] / 6) * float(dice[2][3] / 6);
    cout << possibility << endl;

}
