#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	//just print a trace matrix where the elements are 'k' itself, and zero are the rest
	//explanation: if the multi-dimensional array has a trace matrix,
	//then there will be only one number per column / row
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(i==j)
				cout << k;
			else
				cout << 0;
			cout << " ";
		}
		cout << "\n";
	}
}
