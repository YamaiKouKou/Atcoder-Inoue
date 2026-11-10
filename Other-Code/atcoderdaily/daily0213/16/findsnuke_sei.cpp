#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];

    string target = "snuke";
    // 8方向の移動量を定義 (y, x)
    int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // 's' を起点に探索開始
            if (s[i][j] == 's') {
                for (int d = 0; d < 8; d++) {
                    bool ok = true;
                    // 5文字分チェック
                    for (int k = 0; k < 5; k++) {
                        int ni = i + dy[d] * k;
                        int nj = j + dx[d] * k;

                        // 範囲外チェック、または文字が一致しない場合
                        if (ni < 0 || ni >= h || nj < 0 || nj >= w || s[ni][nj] != target[k]) {
                            ok = false;
                            break;
                        }
                    }

                    if (ok) {
                        // 見つかったら5文字分の座標を出力（1-indexed）
                        for (int k = 0; k < 5; k++) {
                            cout << (i + dy[d] * k) + 1 << " " << (j + dx[d] * k) + 1 << endl;
                        }
                        return 0; // 見つかったら即終了
                    }
                }
            }
        }
    }
    return 0;
}