/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/358/A
*/


#include<stdio.h>
int main(){
	int n;
	while( scanf("%d",&n)==1 ){
		int S[1000];
		for(int i=0;i<n;i++)
			scanf("%d",&S[i]);
		if( n<=3 )
			puts("no");
		else{
			int i,j;
			bool ans=false;
			for(i=1;i<n;i++)
				for(j=i+2;j<n;j++){
					int x1,x2,x3,x4; // x1<x2 x3<x4
					x1= S[i-1]>S[i]?S[i]:S[i-1];
					x2= S[i-1]<S[i]?S[i]:S[i-1];
					x3= S[j-1]>S[j]?S[j]:S[j-1];
					x4= S[j-1]<S[j]?S[j]:S[j-1];
					if( (x1<x3&&x3<x2&&x2<x4)||(x3<x1&&x1<x4&&x4<x2) )
						ans=true;
				}
			if( ans )
				puts("yes");
			else
				puts("no");
		}
	}
	return 0;
}
