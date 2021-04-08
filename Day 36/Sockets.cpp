/* User - Soundu
* Problem - http://codeforces.com/problemset/problem/257/A
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){

  int n , m , k ;
  while( cin >> n >> m>> k ){

    vector<int>V ;
    for( int i = 0; i < n ; i++ ){
      int tmp ;
      cin >> tmp ;
      if( tmp > 1 ) V.push_back(tmp) ;
    }
    sort( V.rbegin() , V.rend() ) ;
    int cnt = 0 , tot = 0 ;
    tot = k ;
    for( int i = 0; i < V.size() && tot < m ; i++ ){
      tot-- ;
      tot+=V[i];
      cnt ++ ;
    }
    if( tot >= m )cout << cnt <<endl ;
    else cout << -1 << endl ;


  }

  return 0 ;
}
