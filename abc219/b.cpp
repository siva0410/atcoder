#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1, s2, s3, T;
  cin >> s1 >> s2 >> s3 >> T;

  string ans = "";
  for(auto t: T){
    if(t == '1')
      ans += s1;
    if(t == '2')
      ans += s2;
    if(t == '3')
      ans += s3;
  }
  cout << ans << endl;
  return 0;
}
