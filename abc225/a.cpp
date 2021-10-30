#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  if(s.at(0) == s.at(1) and s.at(0) == s.at(2)){
    cout << "1\n";
  } else if(s.at(0) == s.at(1) or s.at(0) == s.at(2) or s.at(1) == s.at(2)){
    cout << "3\n";
  } else {
    cout << "6\n";
  }
  
  return 0;
}
