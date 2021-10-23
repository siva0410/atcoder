#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  if(s.substr(s.size()-2, 2) == "er"){
    cout << "er" << '\n';
  } else {
    cout << "ist" << '\n';
  }
 
  return 0;
}
