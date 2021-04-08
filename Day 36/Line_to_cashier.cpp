/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/408/A
*/

#include<bits/stdc++.h>
using namespace std ;
#define MOD  1000000007

int main() {

  int n ;
  while( cin >> n ) {
    long long arr[n]  ;
    for( int i = 0 ; i < n ; i++ )cin >> arr[i] ;
    long long mn = (1LL<<62) ;
    for( int i = 0 ; i < n ; i++ ) {
      long long sum = 0;
      for( int j = 0 ; j < arr[i] ; j ++ ) {
        long long m ;
        cin >> m ;
        sum += ( m * 5LL ) + 15LL ;
      }
      mn = min( mn , sum ) ;
    }
    cout << mn << endl ;
  }
  return 0 ;
}
