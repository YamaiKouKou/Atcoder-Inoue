#include <bits/stdc++.h>
using namespace std;

int main() {
	int p, q, x, y;
	cin >> p >> q;
	cin >> x >> y;
	if( (p<=x) && (x<p+100) && (q<=y) && (y<q+100) )cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
