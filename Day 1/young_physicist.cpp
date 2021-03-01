#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int i, x, y, z, n;
    cin>>n;
    
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(i = 0; i<n; i++) {
        cin >> x >> y >> z;
        
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout<<"YES";
    else
        cout<<"NO";
        
    return 0;
}
