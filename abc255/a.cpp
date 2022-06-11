#include <bits/stdc++.h>

using namespace std;

int main(){
  int r, c;
  cin >> r >> c;
  vector<int> a(4);
  for(int i=0; i<4; i++)
    cin >> a[i];

  cout << a[c-1+2*(r-1)] << endl;
  
  return 0;
}
