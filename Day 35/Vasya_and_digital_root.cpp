/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/355/A
*/

#include <iostream>
using namespace std;
int main()
{
    int k, d;
    cin >> k >> d;
    if (d == 0 && k > 1)
        cout << "No solution";
    else
    {
        cout << d;
        for(int i=0; i<k-1; i++)
            cout << 0;
    }
    return 0;
}
