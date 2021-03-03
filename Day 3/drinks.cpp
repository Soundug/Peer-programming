#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	double a[100], n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	double d = 0, t = 0;
	for(int i = 0; i < n; i++){
		d = a[i]/100;
		t += d;
	}
	cout << (t/n)*100 << "\n";
	return 0;
}
