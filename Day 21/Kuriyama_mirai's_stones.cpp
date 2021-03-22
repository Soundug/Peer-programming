#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int v[n + 1], u[n + 1];
	for(int i = 1; i <= n; ++i) {
		cin >> v[i];
		u[i] = v[i];
	}
	sort(u + 1, u + n + 1);
	for(int i = 1; i <= n; ++i) {
		v[i] += v[i - 1];
		u[i] += u[i - 1];
	}
	int m;
	cin >> m;
	while(m--) {
		int t, l, r;
		cin >> t >> l >> r;
		if(t == 1) cout << v[r] - v[l - 1] << '\n';
		else cout << u[r] - u[l - 1] << '\n';
	}

	return 0;
}
