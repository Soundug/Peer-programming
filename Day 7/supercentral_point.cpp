#include<bits\stdc++.h>
using namespace std;
int main(){
	int n,z=0;
	cin>>n;
	bool p,q,r,s;
	p=q=r=s=0;
	int a[n][2];
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			if(a[i][0]==a[j][0]&&a[i][1]>a[j][1]){
				p=1;
			}
			if(a[i][0]==a[j][0]&&a[i][1]<a[j][1]){
				q=1;
			}
			if(a[i][0]>a[j][0]&&a[i][1]==a[j][1]){
				r=1;
			}
			if(a[i][0]<a[j][0]&&a[i][1]==a[j][1]){
				s=1;
			}

		}
		if(p==1&&s==1&&r==1&&q==1){z++;}
			p=q=r=s=0;
		
	}
	cout<<z<<endl;
	return 0;
}
