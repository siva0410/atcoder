#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int a_max = 0, b_min = INT_MAX;
  int tmp;
  for(int i=0; i<N; i++){
    cin >> tmp;
    a_max = max(tmp, a_max);
  }
  for(int i=0; i<N; i++){
    cin >> tmp;
    b_min = min(tmp, b_min);
  }
  
  if(b_min - a_max + 1 > 0){
    cout << b_min - a_max + 1 << endl;
  } else {
    cout << 0 << endl;
  }
  
  return 0;
}
