#include <bits/stdc++.h>
using namespace std;
  
int main(){
  string s, ans;
  cin >> s;
  for(char c: s){
    if(c != '.')
      ans.push_back(c);
    else
      break;
  }
  cout << ans << endl;
  return 0;
}
