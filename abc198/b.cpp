#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string s;
  
  if(N == 0){
    cout << "Yes" << endl;
    return 0;
  }
  
  while(N%10 == 0){
    N /= 10;
  }
  s = to_string(N);
  string r(s);
  reverse(r.begin(), r.end());
  if(s == r)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
