#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  int x,y;

  scanf("%d %d", &a, &b);
  scanf("%d %d", &x, &y);
  
  if (a<=x && x<=a+99 && b<=y && y<=b+99){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
