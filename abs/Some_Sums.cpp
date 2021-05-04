#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int sum = 0;
  for(int i=1; i <= N; i++){
    int tmp = 0;
    int num = i;
    while(num != 0){
      tmp += num%10;
      num = num/10;
    }
    if(A <= tmp && tmp <= B){
      sum += i;
    }
  }
  cout << sum << endl;
    
  return 0;
}
