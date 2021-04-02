/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/401/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	float n, x;
	cin >> n >> x;
	float sum=0;
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		sum+=a;
	}
	cout << ceil(abs(sum)/x) << "\n";
}
