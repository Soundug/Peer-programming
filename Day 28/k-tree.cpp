/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/431/C
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
const int M = 1e5 + 15, N = 1e6 + 16, inf = 1e9 + 9, MOD = 1e9 + 7;
int dp[101][2], d, k, n;

int rec(int sum, int hasD) {
    if(sum <= 0) {
        return sum == 0 && hasD;
    }
    int &ret = dp[sum][hasD];
    if(ret + 1) return ret;
    ret = 0;
    for(int i = 1; i <= k; i++) {
        ret = (ret % MOD + (rec(sum - i, hasD | (i >= d)) % MOD)) % MOD;
    }
    return ret;
}

int main() {
    scanf("%d %d %d", &n, &k, &d);
    memset(dp, -1, sizeof dp);
    cout << rec(n, 0);
}
