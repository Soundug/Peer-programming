// Polo the penguin and matrix (289B)
// http://codeforces.com/problemset/problem/289/B

#include <bits\stdc++.h>

using namespace std;

int main(){
	
	int n,m,d;
	cin >> n >> m >> d;
	vector<int> array;
	int maxele = INT_MIN;
	int minele = INT_MAX;
	int rem;
	bool check = true;
	for (int i = 0; i < n*m; ++i)
	{
		int temp;
		cin >> temp;
		array.push_back(temp);
		if(i==0) rem = array[i]%d;
		else if(array[i]%d!=rem) check = false;
		minele = min(minele,array[i]);
		maxele = max(maxele,array[i]);
	}

	if(check){
		sort(array.begin(), array.end());
		int ele1 = array[array.size()/2];
		int ele2 = array[array.size()/2 + 1];
		int ans1 = 0;
		int ans2 = 0;
		for (int i = 0; i < n*m; ++i) ans1 += abs(ele1 - array[i])/d;
		for (int i = 0; i < n*m; ++i) ans2 += abs(ele2 - array[i])/d;
		cout << min(ans1,ans2) << endl;
	}

	else cout << -1 << endl;
	return 0;
}
