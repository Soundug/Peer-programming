#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,count=0;
    cin>>n;
    while(n!=0)
    {
        i=n%10;
        n/=10;
        if(i==1)
            count=0;
        else if(i==4 && count==0)
            count++;
            else if(i==4 && count==1)
                count++;
                else if(i!=1 && i!=4)
                    count=3;
            else
                count++;
            if(count==3)
                break;

    }
    if(count==0)
        cout<<"YES";
    else
        cout<<"NO";
}
