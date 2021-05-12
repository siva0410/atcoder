#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, w;
  cin >> a >> b >> w;
  int min, max, rem;
  bool f = true;
  w = w*1000;
  max = w/a;
  min = (w+b-1)/b;
  if(max*b < w) f = false;
  if(min*a > w) f = false;
  if(!f)
    cout << "UNSATISFIABLE" << endl;
  else
    cout << min << " " << max << endl;
  
  return 0;
}
