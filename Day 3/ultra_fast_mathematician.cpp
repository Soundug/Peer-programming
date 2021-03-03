#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, s2;
	cin >> s >> s2;
	for(int i = 0 ; i < (int)s.size(); i++){
		if(s[i] != s2[i]){
			cout << 1;
		} else{
			cout << 0;
		}
	}
	cout << "\n";
	return 0;
}
