#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	string a = "hello";
	int id = 0, cnt = 0;
	for (char c : s) {
		if (c == a[id]) {
			id++;
			cnt++;
		}
	}
	cout << (cnt == 5 ? "YES" : "NO") << '\n';
	return 0;
}
