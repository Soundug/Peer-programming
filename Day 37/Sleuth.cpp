/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/49/A
*/

#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	getline(cin, s);
	// reverse the order of the words
	reverse(s.begin(), s.end());
	char letter = ' ';
	for (char c : s) {
		// store the first letter that appears in the 'letter' variable
		if (c != '?' && c != ' ') {
			letter = tolower(c);
			break;
		}
	}
	// check if the last letter is a vowel or consonant
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y') {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << '\n';
	return 0;
}
