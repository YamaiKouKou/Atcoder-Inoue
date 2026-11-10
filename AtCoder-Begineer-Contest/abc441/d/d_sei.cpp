#include <bits/stdc++.h>
using namespace std;

#define N (int)200000

int l,s,t;
vector<pair<int,int> >e[N];
bool flag[N];


void dfs(int k,int d,int tot){
	if(d==l){
	  if((s<=tot)&&(tot<=t))flag[k]=true;
	  return;
	}
	if(d<l){ //just in case
		int sz=e[k].size();
		for(int i=0;i<sz;i++){
			dfs(e[k][i].first,d+1,tot+e[k][i].second);
		}
	}
	return;
}


int main() {
	int n,m;
	int u,v,c;
	cin >> n >> m >> l >> s >> t;
	for(int i=0;i<m;i++){
		cin >> u >> v >> c;
		e[u-1].push_back({v-1,c});
	}
	for(int i=0;i<n;i++)flag[i]=false;
	dfs(0,0,0);

	vector<int>ans;
	for(int i=0;i<n;i++){if(flag[i])ans.push_back(i+1);}
	int sz=ans.size();
	for(int i=0;i<sz;i++){
		cout << ans[i];
		if(i<(sz-1))cout << " ";
	}
	cout << endl;
	return 0;
}
