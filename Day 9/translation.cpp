#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, t;
	cin >> s >> t;
	int cnt = t.size();
	int cnt2 = 0;
	for(int i = 0; i < (int)s.size(); i++){
		if(s[i] == t[cnt-1]){
			cnt2++;
		}
		cnt--;
	}
	if(cnt2 == (int)s.size()){
		cout << "YES";
	} else{
		cout << "NO";
	}
	cout << "\n";
	return 0;
}
