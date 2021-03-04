#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll k, l, m, n, d, cnt = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> k >> l >> m >> n >> d;
	for(int i = 1; i <= d; i++){
		if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0){
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
