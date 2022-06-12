#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  int b = a[1];
  sort(a.begin(), a.end());
  
  bool yes = false;
  if(b == a[1]) yes = true;

  if(yes) cout << "Yes" << "\n";
  else  cout << "No" << "\n";
  
  return 0;
}
