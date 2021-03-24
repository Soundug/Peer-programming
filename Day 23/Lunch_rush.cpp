#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,k,a,b,count=0,max=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b<k)
        {count=a;
        if(count>max)
            max=count;
        }
        else
        {
            count=a-(b-k);
            if(count>max || max==0)
                max=count;

        }
    }
    cout<<max;

}
