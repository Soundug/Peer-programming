/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/456/A
*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    lli n,i,a,b,flag=0;
    cin>>n;
    vector<pair<lli,lli> >v(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    /* for(i=0; i<n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    bool happyAlex=0;
    for(i=0; i<n-1; i++)
    {
        if(v[i].second>v[i+1].second)
            happyAlex=1;

    }




 puts(happyAlex ? "Happy Alex" : "Poor Alex");
 return 0;

}
