#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    vector<vector<int>> pos(3005);
    rep(i, N) {
        cin >> H[i];
        pos[H[i]].push_back(i);
    }

    int ans = (N > 0 ? 1 : 0);

    // 高さ 1〜3000 まで走査
    for (int h = 1; h <= 3000; ++h) {
        auto& v = pos[h];
        int K = v.size();
        if (K < 2) continue;

        // ペアを全探索
        rep(i, K) for (int j = i + 1; j < K; ++j) {
            int w = v[j] - v[i];
            
            // 枝刈り：手前に同じ高さがあれば、それは「既に数えた列の途中」なのでスルー
            if (v[i] - w >= 0 && H[v[i] - w] == h) continue;

            int count = 2;
            int next_pos = v[j] + w;
            while (next_pos < N && H[next_pos] == h) {
                count++;
                next_pos += w;
            }
            ans = max(ans, count);
        }
    }

    cout << ans << endl;
    return 0;
}