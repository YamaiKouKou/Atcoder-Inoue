#include <iostream>
#include <string>
using namespace std;

int N;
string S;
bool is_takahashi_go_word(string w) { // 高橋語の単語である可能性があるか判定する関数
    bool is_takahashi_go = true;
    int L = w.size();
    for (int i = 0; i < L; ++i) { // w のそれぞれの文字について、
        // S に含まれているか判定する
        bool included = false;
        for (int j = 0; j < N; ++j) { // S のそれぞれの文字を見て、
            if (S[j] == w[i]) { // 文字が等しければ
                included = true; // 含まれている
            }
        }

        if (!included) { // 今見ている w の文字が S に含まれていなければ
            is_takahashi_go = false; // 高橋語の単語ではない
        }
    }
    return is_takahashi_go;
}

// 青木語についても同様
int M;
string T;
bool is_aoki_go_word(string w) {
    bool is_aoki_go = true;
    int L = w.size();
    for (int i = 0; i < L; ++i) {
        bool included = false;
        for (int j = 0; j < M; ++j) {
            if (T[j] == w[i]) {
                included = true;
            }
        }

        if (!included) {
            is_aoki_go = false;
        }
    }
    return is_aoki_go;
}

int main() {
    cin >> N >> M >> S >> T;

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        string w;
        cin >> w;

        bool is_takahashi_go = is_takahashi_go_word(w);
        bool is_aoki_go = is_aoki_go_word(w);

        if (!is_takahashi_go) { // 高橋語の単語である可能性がないなら
            cout << "Aoki" << endl; // 青木語の単語
        } else if (!is_aoki_go) { // 青木語の単語である可能性がないなら
            cout << "Takahashi" << endl; // 高橋語の単語
        } else { //どちらの可能性もあるなら
            cout << "Unknown" << endl; // 確定しない
        }
    }

    return 0;
}
