#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(c*c - a*a - b*b > 0)
    cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
