#include<bits/stdc++.h>
using namespace std;
int main()
{

     int i,s[100000],count=0;
    for(i=0;i<4;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<4;i++)
    {
        if((s[i]==s[i+1]) ||(s[i]==s[i+2]) || (s[i]==s[i+3]))
        {
            count++;
        }
    }
    cout<<count;
}
