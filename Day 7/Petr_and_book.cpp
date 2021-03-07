#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)==1){
		int M[7];
		for(int i=0;i<7;i++)
			scanf("%d",&M[i]);
		int day=0;
		while(true){
			if(n-M[day]<=0)
				break;
			else
				n-=M[day];
			day++;
			if(day>=7)
				day=0;
		}
		printf("%d\n",day+1);
	}
	return 0;
}
