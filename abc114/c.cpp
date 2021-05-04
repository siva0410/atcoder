#include <bits/stdc++.h>
using namespace std;

int64_t input_num;
int cnt = 0;
void rec(int64_t result){
  //base case
  if(input_num < result) return;

  //recursive step
  rec(result*10 + 3);
  rec(result*10 + 5);
  rec(result*10 + 7);
  //check
  vector<bool> flag(3, false);
  int a;
  while(( a = result%10) != 0){
    if(a == 3) flag.at(0) = true;
    if(a == 5) flag.at(1) = true;
    if(a == 7) flag.at(2) = true;
    if(flag.at(0)*flag.at(1)*flag.at(2) == true){
      cnt += 1;
      break;
    }
    result /= 10;
  }
  return;
}

int main(){
  cin >> input_num;

  rec(0);

  cout << cnt << endl;
  
  return 0;
}
