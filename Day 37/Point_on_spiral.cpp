/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/279/A
*/

#include<bits/stdc++.h> 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define forn(i,o,n) for(int i=o;i<n;i++)
#define int long long
using namespace std;
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
         return 0;
      //   cout<<i;
    }
    return 1;
}

int32_t main(){
    IOS;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout); 
    int x,y;
    cin>>x>>y;
    if((y<=0&&x>=0&&x<=-y+1)||(y<=0&&x<0&&x>y)) cout<<4*max(y,-y);
    else if((y>=0&&x>=y)||(y<0&&x>-(y+1))) cout<<4*max(x,-x)-3;
    else if((x>=0&&y>x)||(x<0&&y>=-x)) cout<<4*max(y,-y)-2;
    else cout<<4*max(x,-x)-1;
}
