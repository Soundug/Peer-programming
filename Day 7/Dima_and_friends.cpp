#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        sum += x;
    }
    int count = 0;
    n++;
    sum--;
    
    for(int i=1; i<=5; i++){
        if((sum+i)%n == 0)
            count++;
    }
    cout << 5 - count;
    
    return 0;
}
