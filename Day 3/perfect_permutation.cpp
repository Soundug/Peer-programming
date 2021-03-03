#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tt;
     vector<int>v;
     cin>>tt;
     if(tt & 1) cout<<-1<<endl;
     else{
        for(int i=1;i<=tt;i=i+2)
        {
            v.push_back(i+1);
            v.push_back(i);
        }
        for(int i=0;i<tt;i++) cout<<v[i]<<" ";
        cout<<endl;
     }
}
