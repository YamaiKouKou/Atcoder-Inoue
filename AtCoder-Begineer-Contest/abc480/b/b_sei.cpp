#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,M;
    cin >> N >> M;
    vector<string> S(N);
    vector<string> T(M);
    vector<int> ans(N);
    rep(i,N){
        cin >> S[i];
    }
    rep(j,M){
        cin >> T[j];
    }

    for(int t_num = 0; t_num < M; ++t_num){
        int valid_num = 0;
        bool valid = false;
        bool ichi = false;
        for(int s_num = 0; s_num < N; ++s_num){
            if(T[t_num] == S[s_num]){
                valid_num = s_num;
                valid = true;
                break;
            }
            else{
                if(int(T[t_num].size()) == int(S[s_num].size())){
                    int wrong = 0;
                    for(int ele = 0; ele < int(T[t_num].size()); ++ele){
                        if(T[t_num][ele] != S[s_num][ele]) {wrong++;}
                    }
                    if(wrong == 1){
                        if(ichi){
                            //cout << "t:" << T[t_num] <<" ichi:" << S[s_num] << endl;
                            valid = false;
                            continue;
                        }
                        //cout << "t:" << T[t_num] <<" first-ichi:" << S[s_num] << endl;
                        valid_num = s_num;
                        valid = true;
                        ichi = true;
                    }
                }
            }
        }

        if(valid){
            //cout << "t:" << T[t_num] << " valid-s:" << S[valid_num] << endl;
            ans[valid_num]++;
        }

    }

    rep(k,N){
        cout << ans[k] << endl;
    }

}
