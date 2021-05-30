#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  int sum = 0;
  int num = 0;
  
  for(int i=1; i<n+1; i++){
    for(int j=1; j<k+1; j++){
      num = i*100 + j;
      sum += num;
    }
  }
  cout << sum << endl;
  
  return 0;
}
