#include <iostream>
#include <string>
#include <algorithm>
#include <ranges>
using namespace std;

int main() {
    int N, M;
    string S, T;
    cin >> N >> M >> S >> T;

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        string w;
        cin >> w;

        if (!ranges::all_of(w, [&S](char c) { return ranges::contains(S, c); })) { // 高橋語の単語である可能性がないなら
            cout << "Aoki" << endl; // 青木語の単語
        } else if (!ranges::all_of(w, [&T](char c) { return ranges::contains(T, c); })) { // 青木語の単語である可能性がないなら
            cout << "Takahashi" << endl; // 高橋語の単語
        } else { //どちらの可能性もあるなら
            cout << "Unknown" << endl; // 確定しない
        }
    }

    return 0;
}
