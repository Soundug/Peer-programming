/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/136/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100], n, p;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> p;
		a[p] = i;
	}
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}
