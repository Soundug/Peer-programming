/* User - Soundu
* Problem - https://codeforces.com/problemset/problem/510/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r, c;
	cin >> r >> c;
	bool ok = true;
	int cnt = 1;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(i%2 == 0){
				cout << "#";
			} else{
				if(j == 0 && ok == false){
					cout << "#";
				} else if(j == c-1 && ok == true){
					cout << "#";
				} else{
					cout << ".";
				}
			}
		}
		if(cnt%2 == 0){
			if(ok == true){
				ok = false;
			} else{
				ok = true;
			}
		}
		cout << "\n";
		cnt++;
	}
	return 0;
}
