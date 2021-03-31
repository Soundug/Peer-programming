/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/322/B
*/

#include<bits/stdc++.h>


using namespace std;


int main() {
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);
	
	int mn = min(r, min(g, b));

	int ans = 0;
	for(int e=0; e<3; e++) {
		if(e <= mn) {
			ans = max(ans, (r-e)/3 + (g-e)/3 + (b-e)/3 + e);
		}
	}
	
	printf("%d\n", ans);

	return 0;
}
