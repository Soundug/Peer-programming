#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,time;
    string s;
    cin >> n >> time;
    cin >> s;
    
    while(time >= 1)
    {
        for(int i=0; s[i] != '\0'; i++)
        {
            if(time >= 1)
            {
                if(s[i] == 'B' && s[i+1] == 'G')
                {
                    swap(s[i],s[i+1]);
                    i++;
                }
            }
            
            if(time == 0)
                break;
        }
        time--;
    }
    cout << s;
}
