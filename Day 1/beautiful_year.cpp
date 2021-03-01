#include<bits/stdc++.h>
using namespace std;

int main()
{
  	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int year,a,b,c,d;
	cin >> year;
	
	while(1)
	{
	    year++;
	    a = year/1000;
	    b = year/100 % 10;
	    c = year % 100/10;
	    d = year % 10;
	    
	    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
	    break;
	}
	
	cout << year;
	return 0;
}
