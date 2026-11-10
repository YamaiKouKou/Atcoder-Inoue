#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    int N,M;
    cin >> N >> M;
    vector<string> S(N);
    vector<string> T(M);
    vector<int> ans(101);
    rep(i,N){
        cin >> S[i];
    }
    rep(j,M){
        cin >> T[j];
    }

    for(int t_num = 0;t_num < M; ++t_num){
        int s = 0;
        bool same = false;
        bool ichi = false;
        for(int s_num = 0;s_num < N; ++s_num){
            if(int(S[s_num].size()) != int(T[t_num].size())){continue;}
            else{
                if(S[s_num] == T[t_num]){
                    ans[s_num]++;
                    same = true;
                    break;
                }
                else{
                    int wrong = 0;
                    rep(ele,T[t_num].size()){
                        if(S[s_num][ele] != T[t_num][ele]){wrong++;}
                    }
                    if(wrong <= 1){
                        if(!ichi){
                            ichi = true;
                            ans[s_num]++;
                            s = s_num;
                        }
                        else{
                            ans[s]--;
                            break;
                        }
                    }
                }
            }
        }
    }

    rep(k,N){
        cout << ans[k] << endl;
    }

}
