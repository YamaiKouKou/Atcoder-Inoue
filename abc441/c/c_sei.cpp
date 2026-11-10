#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, k;
	long long x, y = 0;
	cin >> n >> k >> x;
	vector<long long>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end(),greater<long long>());
	int ans=0;
	for(int i=0;i<n;i++){
		ans++;
		if(i<(n-k))continue;
		y+=a[i];
		if(y>=x)break;
	}
	if(y<x)cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}
