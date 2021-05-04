#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; i++){
    cin >> A.at(i);
  }

  sort(A.begin(), A.end());

  int ans = 0;
  int max = -1;
  bool Alice = true;
  for(int i=0; i<N; i++){
    max = A.back();
    A.pop_back();
    if(Alice) ans += max;
      else ans -= max;
      Alice ^= 1;
  }

  cout << ans << endl;
  return 0;
}
