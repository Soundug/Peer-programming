#include <iostream>
using namespace std;

int main(void)
{
	unsigned int n, ind = 1, temp, temp2, ans;
	cin >> n >> ans;

	for(unsigned int i = 1; i < n && ind < ans; i++)
	{
		cin >> temp;
		ind += temp;
		for (unsigned int j = 1; j < temp; j++)
			cin >> temp2;
	}
	if (ind == ans)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
