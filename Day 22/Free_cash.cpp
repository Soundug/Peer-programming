// 237A - Free Cash - Codeforces problem
// http://codeforces.com/problemset/problem/237/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,h[100000],m[100000],count=1,max=1,sum1=0,sum2=0;
    cin>>n;


    for(i=0; i<n; i++)
    {
        cin>>h[i]>>m[i];
        sum1+=h[i];
        sum2+=m[i];
    }
    for(i=0; i<n; i++)
    {
        if(h[i]==h[i+1] && m[i]==m[i+1])
        {
            count++;
            if(count>=max)
                max=count;
        }
        else
            count=1;
    }
    if(sum1==0 && sum2==0)
        max=n;




    cout<<max;


}
