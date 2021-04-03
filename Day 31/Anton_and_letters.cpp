/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/443/A
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	char s[1000];
	string d;
	cin.getline(s, 1000);
	int cnt = 0;
	for(int i = 0; i < (int)strlen(s); i++){
		if(isalpha(s[i])){
			d += s[i];
			cnt++;
		}
	}
	sort(d.begin(), d.end());
	int cnt2 = 0;
	for(int i = 0; i < cnt; i++){
		if(d[i] != d[i+1]){
			cnt2++;
		}
	}
	cout << cnt2 << "\n";
	return 0;
}
