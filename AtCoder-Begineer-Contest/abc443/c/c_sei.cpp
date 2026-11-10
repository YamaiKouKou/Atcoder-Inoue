#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,t;
  cin >> n >> t;
  int res=0;
  int open=0;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    if(open<a){
      res+=(a-open);
      open=a+100;
    }
  }
  if(open<t){ res+=(t-open); }
  cout << res << "\n";
  return 0;
}
