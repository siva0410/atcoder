#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  vector<int> A(n), B(n), C(n);
  int c;
  long long cnt = 0;
  for(int i=0; i<n; i++)
    cin >> A.at(i);
  for(int i=0; i<n; i++)
    cin >> B.at(i);
  for(int i=0; i<n; i++)
    cin >> C.at(i);
 
  vector<int> h(n,0);
  for(auto c: C){
    h.at(B.at(c-1)-1) += 1;
  }
  for(auto a: A){
    cnt += h.at(a-1);
  }

  cout << cnt << endl;
  return 0;
}
