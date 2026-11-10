#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
using ll = long long;

void solve() {
    ll N, W;
    cin >> N >> W;
    ll ww = 2 * W;

    map<ll, ll> m;
    ll total_sum = 0;
    for (int i = 0; i < N; ++i) {
        ll c; cin >> c;
        m[i % ww] += c;
        total_sum += c;
    }

    // 値が存在する地点(pos, cost)を並べる
    vector<pair<ll, ll>> events;
    for (auto const& [pos, val] : m) {
        events.push_back({pos, val});
    }
    
    // 円環処理のため、2周分用意する
    int sz = events.size();
    for (int i = 0; i < sz; ++i) {
        events.push_back({events[i].first + ww, events[i].second});
    }

    // 尺取り法で「区間 [L, L + W)」に含まれるコストの和を計算
    ll current_window_sum = 0;
    ll ans = 8e18; // 十分大きな値
    int r = 0;

    for (int l = 0; l < sz; ++l) {
        // 右端 r を、左端 events[l].first + W を超えない範囲で進める
        while (r < events.size() && events[r].first < events[l].first + W) {
            current_window_sum += events[r].second;
            r++;
        }
        
        // この区間 [events[l].first, events[l].first + W) の和が候補
        ans = min(ans, current_window_sum);
        
        // 次のループに向けて左端を捨てる
        current_window_sum -= events[l].second;
    }

    cout << (ans == 8e18 ? 0 : ans) << endl;
}

int main(){
    int T;
    cin >> T;
    rep(i,T) solve();
}