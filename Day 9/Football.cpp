#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,i, count1=1,count2=0;
    cin>>n;
    string s,p,z;
    for(i=0; i<n; i++)
    {
        cin>>s;
        if(i==0)
            p=s;
        else
        {
            if(s==p)
                count1++;
            else
            {
                z=s;
                count2++;
            }
        }

    }
    /// cout<<count1<<" "<<count2<<endl;
    if(count1>count2)
        cout<<p;
    else
        cout<<z;
}
