/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/302/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	int positive = 0;
	int negative = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			positive++;
		} else {
			negative++;
		}
	}

	for (int i = 0; i < m; i++) {
		int from, to;
		cin >> from >> to;
		int segment = (to - from) + 1;
		if (segment % 2 == 0) {

			if (positive >= segment / 2 && negative >= segment / 2) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			cout << 0;
		}
		cout << '\n';
	}
	return 0;
}
