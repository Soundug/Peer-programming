#include <iostream>
#include <set>
using namespace std;

int main()
{
    int x , z=0;
    cin>>x ;

    string s ;
    cin>>s;

    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i]==s[i+1])
            z++;
    }
    cout<<z;
    return 0;
}
