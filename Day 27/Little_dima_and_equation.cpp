/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/460/B
*/


#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<functional>
#include<deque>
// C
#include<cstdio>
#include<cstring>
#include<ctime> 
#include<cctype>
#include<cmath>
// namespace
using namespace std;
// typedef
typedef long long lli;
typedef unsigned long long ull;
// template
template<class T> T max(T a, T b, T c){ return max(a, max(b, c)); }
template<class T> T min(T a, T b, T c){ return min(a, min(b, c)); }
// const variable
#define MAX_N 1000
#define MAX_M 1000
#define INF 1e9
#define NONE -1
#define EPS 1e-6
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
const double PI = 2.0 * acos(0.0);
const int mx[] = { 0, 1, 0, -1 };
const int my[] = { -1, 0, 1, 0 };
// main
int check(lli s){
	int res = 0;
	while (s > 0)
		res += s % 10, s /= 10;
	return res;
}
int main(){
	vector<int> ans;
	int a, b, c;
	ans.clear();
	scanf("%d%d%d", &a , &b, &c);
	for (int i = 1; i <= 81; i++){
		lli tmp = b;
		for (int j = 1; j <= a; j++)
			tmp *= i;
		tmp += c;
		if (tmp < 1e9 && check(tmp) == i)
			ans.push_back(tmp);
	}
	sort(ans.begin(), ans.end());
	printf("%d\n", ans.size());
	for (int i = 0; i < ans.size(); i++){
		if (i > 0)	putchar(' ');
		printf("%d", ans[i]);
	}
	putchar('\n');
	return 0;
}
