#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[100000],c25=0,c50=0,c100=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }

    if(a[0]==50 || a[0]==100)
     {
         cout<<"NO";
        c25-=100;
     }
    else

        for(i=0;i<n;i++)
        {
            if(a[i]==25)
                c25++;
            if(a[i]==50)
            {
                c50++;
                c25-=1;
                if(c25<0)
                {
                     c25-=100;
                    cout<<"NO";
                    break;
                }


            }
            if(a[i]==100)
            {
                if(c50>0 && c25>0)
                {
                    c50-=1;
                    c25-=1;

                }
                else if(c50==0 && c25>0)
                {
                    c25=c25-3;
                    if(c25<0)
                    {
                        c25-=100;
                        cout<<"NO";
                        break;
                    }
                }
                else
                {
                    c25-=100;
                    cout<<"NO";
                    break;
                }


            }

        }
        if(c25>=0)
            cout<<"YES";
}
