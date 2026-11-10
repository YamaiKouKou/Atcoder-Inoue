#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int main() {
    ll N,M;
    ll ans = 0;
    cin >> N >> M;
    // [日時]=変化後色
    vector<vector<ll>> NewColorDay(M);
    // [日時]=変化前色
    vector<vector<ll>> PastColorDay(M);
    // その色は今使われているか(true:使用,false:未使用)
    vector<ll> NumColor(N, 0);
    rep(i,N){
        ll a,d,b;
        cin >> a >> d >> b;
        a--; d--; b--;
        NewColorDay[d].push_back(b);
        PastColorDay[d].push_back(a);
        if(NumColor[a] == 0){
            ans++;
        }
        NumColor[a]++;
    }

    for(int day = 0; day < M; ++day){
        int ele = 0;
        while(ele < (int)NewColorDay[day].size()){
            ll new_c = NewColorDay[day][ele];
            ll past_c = PastColorDay[day][ele];
            //cout << "day:" << day << new_c << " " << past_c << endl;
            NumColor[past_c]--;
            
            if(NumColor[new_c] == 0){
                ans++;
            }

            if(NumColor[past_c] == 0){
                ans--;
            }

            NumColor[new_c]++;
            ele++;
        }

        cout << ans << endl;
    }
}
