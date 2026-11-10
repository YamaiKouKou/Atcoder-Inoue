#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];

    int count1 = 0; // 完全一致（位置も数字も同じ）
    int total_match = 0; // 数字が共通している総数

    // 1. 完全一致を数える
    for (int i = 0; i < N; ++i) {
        if (A[i] == B[i]) {
            count1++;
        }
    }

    // 2. Aに含まれる数字の個数をマップに記録する
    // map[数字] = その数字が出てきた回数
    map<ll, int> countsA;
    for (int i = 0; i < N; ++i) {
        countsA[A[i]]++;
    }

    // 3. Bの数字が A のマップに存在するか確認する
    for (int i = 0; i < N; ++i) {
        if (countsA[B[i]] > 0) {
            total_match++;
            // 同じ数字を重複して数えないように、1つ使ったら減らす
            // (問題の設定が「1対1対応」なら必要。単に「含まれるか」なら不要)
            countsA[B[i]]--; 
        }
    }

    // 4. 「数字は同じだが位置が違うもの」は (全体) - (完全一致)
    int count2 = total_match - count1;

    cout << count1 << endl;
    cout << count2 << endl;

    return 0;
}