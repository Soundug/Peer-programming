#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100];
	string s;
	getline(cin, s);
	int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1'){
			a[cnt] = 1;
			cnt++;
		} else if(s[i] == '2'){
			a[cnt] = 2;
			cnt++;
		} else if(s[i] == '3'){
			a[cnt] = 3;
			cnt++;
		} else{
			continue;
		}
	}	
	sort(a, a + cnt);
	for(int i = 0; i < cnt; i++){
		cout << a[i];
		if(i != cnt - 1){
			cout << "+";
		}
	}
	return 0;
}
