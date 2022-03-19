#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  if(x<=a){
    cout << 1 << endl;
    return 0;
  }
  if(a<x and x<=b){
    cout << double(c)/(b-a) << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}
