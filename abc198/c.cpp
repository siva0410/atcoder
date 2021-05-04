#include <bits/stdc++.h>
using namespace std;

int main(){
  double r, x, y;
  cin >> r >> x >> y;
  int ans = 0;
  double distance;
  
  distance = sqrt(x*x + y*y);
  if(distance == r){
    cout << 1 << endl;
    return 0;
  }
  
  while(true){
    if(r*2-distance >= 0){
      ans += 2;
      cout << ans <<endl;
      return 0;
    } else {
      distance -= r;
      ans += 1;
    }
  }
  return 0;
}
