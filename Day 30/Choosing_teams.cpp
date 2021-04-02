/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/432/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[2000], n, k;
	cin >> n >> k;;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 0, ans = 0;
	for(int i = 0; i < n; i++){
		if(a[i]+k <= 5){
			cnt++;
		}
		if(cnt == 3){
			ans++;
			cnt = 0;
		}
	}
	cout << ans << "\n";
	return 0;
}
