#include <bits/stdc++.h>
using namespace std;

int main(){
  int s;
  cin >> s;
  int cnt = 0;
  for(int i=0; i<3; i++){
    if(s%10 == 1) cnt++;
    s = s/10;
  }
  cout << cnt << endl;
  return 0;
}
