/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/441/B
*/

#include<cstdio>
#include<algorithm>

int main(){
	int n, m;
	while (scanf("%d%d", &n, &m) == 2){
		int T[10001] = { 0 };
		long long int ans = 0;
		for (int i = 0; i < n; i++){
			int day, amount;
			scanf("%d%d", &day, &amount);
			T[day] += amount;
		}
		for (int i = 1; i <= 3005; i++){
			int remain = m;
			if (T[i - 1] > remain)
				ans += remain, T[i - 1] -= remain, remain = 0;
			if (T[i - 1] <= remain)
				ans += T[i - 1], remain -= T[i - 1], T[i - 1] = 0;
			if (T[i] > remain)
				ans += remain, T[i] -= remain, remain = 0;
			if (T[i] <= remain)
				ans += T[i], remain -= T[i], T[i] = 0;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
