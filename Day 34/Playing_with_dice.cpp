/* User - Soundu
* Problem - https://codeforces.com/problemset/problem/378/A
*/

#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int a, b;
	cin >> a >> b;
	int f = 0, d = 0, s = 0;
	for(int i = 1; i <= 6; ++i) {
		if(abs(a - i) < abs(b - i)) {
			f++;
		}
		else if(abs(b - i) < abs(a - i)) {
			s++;
		}
		else {
			d++;
		}
	}
	cout << f << " " << d << " " << s << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
