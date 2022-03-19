#include <bits/stdc++.h>

using namespace std;

vector<vector<long long>> memo(1000000, vector<long long>(9, 0));

long long fact(int n, int num){
  long long ans = 0;  
  if(num == 0 or num == 10){
    return 0;
  }
  if(n == 1){
    return 1;
  }
  if(memo.at(n-1).at(num-1) != 0){
    ans = memo.at(n-1).at(num-1);
  } else{
    ans = fact(n-1,num-1)+fact(n-1,num)+fact(n-1,num+1);
    memo.at(n-1).at(num-1) = ans;
  }

  return ans;
}

int main(){
  long long n;
  cin >> n;  
  // vector<vector<long long>> memo(n, vector<long long>(9, 0));
  
  long long ans = 0;
  for(int i=1; i<10; i++){
    ans += fact(n,i);
  }
  cout << ans%998244353 << endl;  
  
  return 0;
}
