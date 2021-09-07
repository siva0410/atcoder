#include <bits/stdc++.h>

using namespace std;

int main(){
  int pass;
  cin >> pass;
  vector<int> x(4);
  bool weak = true;

  for(int i=0; i<4; i++){
    x[i] = pass%10;
    pass /= 10;
  }
  reverse(x.begin(), x.end());
  for(int i=0; i<3; i++){
    if(x[i] == x[i+1]){
      weak &= true;
    } else{
      weak &= false;
    }
  }
  if(!weak){
    weak = true;
    for(int i=0; i<3; i++){
      if(x[i+1] == (x[i]+1)%10){
	weak &= true;
      } else{
	weak &= false;
      }
    }
  }

  if(weak)
    cout << "Weak" << '\n';
  else 
    cout << "Strong" << '\n';
  return 0;
}
