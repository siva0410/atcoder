#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  long long n;
  vector<char> s;
  cin >> n;
  
  while(n != 0){
    if(n%2 != 0){
      s.push_back('A');
      n--;
    } else{
      n /= 2;
      s.push_back('B');
    }
  }
  
  reverse(s.begin(), s.end());
  for(auto ans: s)
    cout << ans;
  return 0;
}
    
  
