#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, ans = 0;
  cin >> n;
  int a;
  for(int i=0; i<n; i++){
    cin >> a;
    if(a >= 10)
      ans += a-10;
  }

  cout << ans << endl;
  return 0;
}
  
