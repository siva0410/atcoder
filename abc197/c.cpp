#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> A(N);
  for(int i=0; i<N; i++)
    cin >> A.at(i);

  int64_t o=0, x, ans=INT64_MAX;
  for(int64_t bit=0; bit<(1<<N); bit++){
    bit |= 1<<(N-1);
    x = 0;
    for(int i=0; i<N; i++){
      o |= A.at(i);
      if(1 & (bit>>i)){
	x ^= o;
	o = 0;
      }
    }
    ans = min(ans, x);
  }
  cout << ans << endl;

  return 0;
}
