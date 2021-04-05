/* User - Soundu
* Problem - https://codeforces.com/problemset/problem/439/A
*/

#include <iostream>
using namespace std;

int main()
{
	int d, n;
	cin >> n >> d;

	int sum = 0, t;
	for(int i = 0; i < n; i++)
	{
		cin >> t;
		sum += t;
	}

	if(sum + 10 * (n - 1) > d)
		cout << -1;
	else
		cout << (d - sum) / 5;

	return 0;
}
