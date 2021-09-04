#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  set<string> list = {"ABC","ARC","AGC","AHC"};
  list.erase(s1);
  list.erase(s2);
  list.erase(s3);
  for(auto& a: list){
    cout << a << endl;
  }
      
  return 0;
}
