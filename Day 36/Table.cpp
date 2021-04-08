/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/359/A
*/

#include <bits/stdc++.h>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#define zero(arr) memset(arr,0,sizeof(arr));
#define mem(arr,k) memset(arr,k,sizeof(arr));
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_1(i,n) for(int i=1;i<n;i++)
#define FOR(i,m,n,k) for(int i=m;i<n;i=i+k)

#define VI vector<int>
#define VVI vector< VI >
#define VIit VI::iterator

#define pb(a) push_back(a)
#define SI(a) scanf("%d",&a)
#define SU(a) scanf("%u",&a)
#define SHD(a) scanf("%hd",&a)
#define SHU(a) scanf("%hu",&a)
#define SLLD(a) scanf("%lld",&a)
#define SLLU(a) scanf("%llu",&a)
#define SF(a) scanf("%f",&a)
#define SLF(a) scanf("%lf",&a)
#define SC(a) scanf("%c",&a)
#define SS(a) scanf("%s",a)
#define swp(type, a, b) {type x=a; a=b; b=x;}
#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define pi acos(-1.0)
#define eps 1e-9

//bool CHECK(int num,int pos){ return num&(1<<(pos)); }
//int SET(int &num,int pos){ return num=(1<<(pos));}
//int CLEAR(int &num,int pos) {return num&=~(1<<(pos));}
//int TOGGLE(int num,int pos) {return num^=(1<<(pos)); }


#define ST          first
#define SE          second
#define ALL(x)      (x).begin(), (x).end()
#define INI(a, v)   memset(a, v, sizeof(a))
#define RE(i,s,n)   for(int i=s;i<(n);++i)
#define FR(i,n)     RE(i,0,n)
#define TR(i,x)     for(typeof(x.begin()) i=x.begin();i!=x.end();++i)
#define PU          push_back
#define MP          make_pair
#define SZ(x)       (int)(x.size())

using namespace std;

//int dirR8[]= {0,-1,-1,-1,0,1,1,1};
//int dirC8[]= {1,1,0,-1,-1,-1,0,1};
//int dirR4[]= {0,-1,0,1};
//int dirC4[]= {1,0,-1,0};
//int dirR[]={-2,-1, 1, 2, 2,1,-1,-2};
//int dirC[]={-1,-2,-2,-1, 1,2, 2, 1};

int main()
{
    //read;
    int r,c;
    cin>>r>>c;
    int temp;
    int act=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>temp;
            if(act)if(temp==1 && (i==0 || i==(r-1) || j==0 || j==(c-1)))act=0;
        }
    }
    if(act)cout<<"4"<<endl;
    else cout<<"2"<<endl;
    return 0;
}
