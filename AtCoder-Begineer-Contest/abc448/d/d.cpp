#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n); ++i)
using ll = long long;

int N;
vector<int> A;
vector<vector<int>> G;
vector<string> ans;
map<int, int> counts; // 現在のパス上の各整数の出現回数

// u: 現在の頂点, p: 親の頂点, has_duplicate: ここまでのパスに重複があるか
void dfs(int u, int p, bool has_duplicate) {
    // 現在の頂点の数字をカウント
    counts[A[u]]++;
    
    // もし既に重複があるか、今回の数字で新しく重複が発生したら true
    bool current_duplicate = has_duplicate || (counts[A[u]] > 1);
    
    // 答えを格納
    ans[u] = current_duplicate ? "Yes" : "No";
    
    // 子頂点へ探索
    for (int v : G[u]) {
        if (v == p) continue;
        dfs(v, u, current_duplicate);
    }
    
    // 【重要】戻る際の状態の巻き戻し
    counts[A[u]]--;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    A.resize(N + 1);
    for(int i = 1; i <= N; ++i) cin >> A[i];
    
    G.resize(N + 1);
    for (int i = 0; i < N - 1; ++i) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    
    ans.resize(N + 1);
    
    // 頂点1を根としてDFS開始
    dfs(1, 0, false);
    
    // 結果出力
    for (int i = 1; i <= N; ++i) {
        cout << ans[i] << "\n";
    }
    
    return 0;
  
}
