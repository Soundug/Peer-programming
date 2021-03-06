#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int drink = (k*l)/nl;
    
    int limes = c*d;
    
    int salt = p/np;
    
    int toast = min(drink, min(limes, salt));
    
    cout << toast/n << endl;
    
    return 0;
}
