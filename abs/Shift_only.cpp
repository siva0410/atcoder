#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> A(N);
  for(int i=0; i<N; i++){
    cin >> A.at(i);
  }
  
  int64_t ans = INT64_MAX;
  for(int64_t a: A){
    int64_t cnt = 0;
    while((a&0b1) == 0){
      cnt++;
      a = a>>1;
    }
    ans = min(cnt, ans);
  }
  cout << ans << endl;
    
  return 0;
}
