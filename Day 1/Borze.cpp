#include<bits/stdc++.h>
using namespace std;

void decode()
{
    string s;
    cin >> s;
    for(int i=0; i < (int)s.size(); i++)
    {
        if(s[i] == '-' && s[i+1] == '-')
        {
            cout << 2;
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.')
        {
            cout << 1;
            i++;
        }
        else if(s[i] == '.')
        {
            cout << 0;
        }
    }
    cout<<endl;
}

int main()
{
  	ios::sync_with_stdio(false);
	cin.tie(0);
	
	decode();
	return 0;
}
