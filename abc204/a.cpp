#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  int tmp;
  cin >> x >> y;
  tmp = x+y;

  if(tmp == 0)
    cout << 0 << endl;
  if(tmp == 1)
    cout << 2 << endl;
  if(tmp == 2)
    cout << 1 << endl;
  if(tmp == 3)
    cout << 0 << endl;
  if(tmp == 4)
    cout << 2 << endl;
  
  return 0;
}
  
