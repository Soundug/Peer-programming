#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x=0;
    char ch[4];
    cin >> n;
    
    while(n--){
        cin >> ch;
        if((ch[0] == '+' && ch[1] == '+') || (ch[1] == '+' && ch[2] == '+')){
            x++;
        }
        else{
            x--;
        }
    }
    
    cout << x << endl;
    return 0;
}
