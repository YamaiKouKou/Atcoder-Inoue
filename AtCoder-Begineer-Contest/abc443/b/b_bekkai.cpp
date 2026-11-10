#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin >> n >> k;
  ll lef=0,rig=1e9;
  while(lef<=rig){
    ll mid=(lef+rig)/2;
    ll cur=((n+(n+mid))*(mid+1))/2;
    if(cur<k){lef=mid+1;}
    else{rig=mid-1;}
  }
  cout << lef << "\n";
  return 0;
}
