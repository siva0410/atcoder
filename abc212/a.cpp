#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  if(0 < a && b == 0)
    cout << "Gold" << '\n';
  else if(a == 0 && 0 < b)
    cout << "Silver" << '\n';
  else
    cout << "Alloy" << '\n';
  return 0;
}
