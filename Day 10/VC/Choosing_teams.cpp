#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[2000], n, k;
	cin >> n >> k;;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int count = 0, ans = 0;
	for(int i = 0; i < n; i++){
		if(a[i]+k <= 5){
			count++;
		}
		if(count == 3){
			ans++;
			count = 0;
		}
	}
	cout << ans << "\n";
	return 0;
}
