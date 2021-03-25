/* User - Soundu
* Problem - https://codeforces.com/problemset/problem/270/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>a;
      if(360 %(a-180)==0)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    }

}
