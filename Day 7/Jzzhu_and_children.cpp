#include<bits/stdc++.h>
#define lli long long
using namespace std;

int main()
{
    lli n,m,i,a;
    queue<lli>x,y;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a;
        x.push(a);
        y.push(i);
    }
    
    while(!x.empty()){
        if(x.front() <= m){
            x.pop();
            y.pop();
        }
        else{
            x.push(x.front()-m);
            y.push(y.front());
            x.pop();
            y.pop();
            
        }
    }
    cout << y.back();
    return 0;
}
