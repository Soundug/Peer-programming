#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    int t = 0;
    
    for(int i=0; i<s1.size(); i++){
        if(tolower(s1[i]) < tolower(s2[i])){
            t = -1;
            break;
        }
        if(tolower(s1[i]) > tolower(s2[i])){
            t = 1;
            break;
        }
    }
    cout << t << endl;
    return 0;
}
