#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n;
    int mini=0, c=0;
    while(n--)
    {
        cin>>a>>b;
        c=b+(c-a);
        if(c>mini)
        {
            mini=c;
        }
    }
    cout<<mini<<endl;

}
