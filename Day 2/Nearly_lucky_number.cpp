#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a[1000], n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int cnt = 0;
	cin >> n;
	while(n != 0)
	{
		a[cnt] = n%10;
		n /= 10;
		cnt++;
	}
	int cnt2 = 0;
	for(int i = cnt-1; i >= 0; i--)
	{
		if(a[i] == 4 || a[i] == 7){
			cnt2++;
		} 
	}
	if(cnt2 == 4 || cnt2 == 7){
		cout << "YES";
	} else{
		cout << "NO";
	}
	cout << "\n";
	return 0;
}
