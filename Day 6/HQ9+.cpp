#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;
    bool flag = false;
    
    for(int i=0; i<p.size(); i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            cout << "YES";
            flag = true;
            break;
        }
    }
    if(!flag)
        cout<<"NO";
        
    return 0;
}
