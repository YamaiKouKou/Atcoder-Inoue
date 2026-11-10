#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
  int Q;
  cin >> Q;
  int volume = 0;
  bool state = false;
  vector<int> audio(Q);
  for(int i=0;i<Q;i++){
    cin >> audio.at(i);
    if(audio.at(i) == 1) {
        volume++;
    }
    else if(audio.at(i) == 2){
        if(volume >= 1){
            volume--;
        }
    }
    else{
        if(!state) state=true;
        else state=false;
    }
    if(state && volume >= 3) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
