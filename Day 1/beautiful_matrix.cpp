#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int i, j, n, x, y, m[100][100], ans;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin >> m[i][j];
            
            if(m[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    
    ans = abs(x-3) + abs(y-3);
    cout << ans;
    
    return 0;
}
