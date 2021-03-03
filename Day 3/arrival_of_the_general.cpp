#include <bits/stdc++.h>
using namespace std;
int main() {
int n,x,max,min,i,j;
	cin >> n; 
	vector <int> s(n);
	for(i=0; i<n; i++) 
		cin >> s[i];
	max = distance(s.begin(),max_element(s.begin(),s.end()));
	min = distance(s.begin(),min_element(s.begin(),s.end()));
	for(j=0,i=n-1; j<n; j++) {
		if(s[max]==s[i])  
			max = i;
	if(s[min] == s[j]) 
 		min = j;
		 i--;		
}
if(min > max) 
	cout <<n-1-min+max;
else
	cout<< n-2+max-min;
}
