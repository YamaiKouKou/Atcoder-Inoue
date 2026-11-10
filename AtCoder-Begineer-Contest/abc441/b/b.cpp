#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  string strS,strT;
  string S[26],T[26];
  int Q;

  int tmp=0;

  string W[101];

  scanf("%d %d", &N, &M);
  while(tmp < N){
    scanf("%s", &S[tmp]);
    tmp++;
  }
  tmp=0;
  while(tmp < M){
    scanf("%s", &T[tmp]);
    tmp++;
  }
  scanf("%s", &T);
  scanf("%d", &Q);
  while(tmp < Q){
    scanf("%s", &W[tmp]);
    tmp++;
  }

  
  if (a<=x && x<=a+99 && b<=y && y<=b+99){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
