#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[1000][3], n, count, t=0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count > 1){
            t++;
        }
        count = 0;
    }
    cout << t << endl;
    
    return 0;
}
