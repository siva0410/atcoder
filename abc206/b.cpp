#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n ;
  int sum = 0;
  for(int i=0;;i++){
    sum += i;
    if(sum >= n){
      cout << i << endl;
      break;
    }
  }
  return 0;
}
