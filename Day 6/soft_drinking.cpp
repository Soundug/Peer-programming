#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return (a < b);
}

int main()
{
    int n,k,l,c,d,p,nl,np;
    
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int toasts = (k*l)/nl;
    
    int limes = c*d;
    
    int salt = p/np;
    
    cout << min({toasts, limes, salt}, compare) << "\n";
    
    return 0;
}
