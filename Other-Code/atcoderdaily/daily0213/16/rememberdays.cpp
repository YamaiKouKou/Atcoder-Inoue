#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0;i < (n); ++i)
using ll = long long;
using namespace std;

// 道路の情報を格納する構造体
struct Edge {
    int to;     // 行き先の街
    int cost;   // 道路の長さ
};

// 街のつながりを表す隣接リスト
vector<Edge> G[11];
bool visited[11];
long long max_dist = 0;

/**
 * DFS関数
 * v: 現在の街
 * current_dist: ここまでの合計距離
 */
void dfs(int v, long long current_dist) {
    // 訪れるたびに最大値を更新
    max_dist = max(max_dist, current_dist);
    
    // 今いる街を「訪問済み」にする
    visited[v] = true;

    // 現在の街からつながっている道路をすべて調べる
    for (auto& edge : G[v]) {
        if (!visited[edge.to]) {
            // まだ行っていない街なら、そこへ進む
            dfs(edge.to, current_dist + edge.cost);
        }
    }

    // 【重要】別のルートでこの街を再利用できるように「未訪問」に戻す
    visited[v] = false;
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        // 双方向に移動可能なので両方に追加
        G[u].push_back({v, c});
        G[v].push_back({u, c});
    }

    // どの街がスタート地点になるか分からないので、すべての街を試す
    for (int i = 1; i <= N; i++) {
        // 毎回 visited を false で初期化する必要はない（DFSの中で戻しているため）
        dfs(i, 0);
    }

    cout << max_dist << endl;

    return 0;
}