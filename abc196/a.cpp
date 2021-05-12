#include <bits/stdc++.h>
using namespace std;
  
int main(){
  int a, b, c, d;
  int ans=-200;
  cin >> a >> b >> c >> d;
  for(int i=a; i<b+1; i++){
    for(int j=c; j<d+1; j++){
      ans = max(ans, i-j);
    }
  }
  cout << ans << endl;
  return 0;
}
