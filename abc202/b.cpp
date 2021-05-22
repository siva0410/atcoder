#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  string ans;
  while(s.size()){
    switch(s.back()){
    case '0':
      ans.push_back('0');
      break;
    case '1':
      ans.push_back('1');
      break;
 
    case '6':
      ans.push_back('9');
      break;
 
    case '8':
      ans.push_back('8');
      break;
 
    case '9':
      ans.push_back('6');
      break;
    }
    s.pop_back();
  }
  cout << ans << endl;
 
  return 0;
}
