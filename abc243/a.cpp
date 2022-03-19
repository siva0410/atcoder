#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c, v;
  cin >> v >> a >> b >> c;
  v = v%(a+b+c);
  v -= a;
  if(v<0){
    cout << "F" << endl;
    return 0;
  }
  v -= b;
  if(v<0){
    cout << "M" << endl;
    return 0;
  }
  v -= c;
  if(v<0){
    cout << "T" << endl;
    return 0;
  }
}
