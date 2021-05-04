#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b){
  char tmp;
  tmp = a;
  a = b;
  b = tmp;
}
  
int main(){
  int N, Q;
  vector<string> s(2);
  string S;
  cin >> N;
  cin >> S;
  cin >> Q;
  s.at(1) = S.substr(N);
  s.at(0) = S.erase(N);
  int a, b, t, a_i, b_i, flag=0;
  for(int i=0; i<Q; i++){
    cin >> t >> a >> b;
    a_i = flag;
    b_i = flag;
    if(t == 1){
      if(a > N){
	a = a - N;
	a_i = flag ^ 1;
      }
      if(b > N){
	b = b - N;
	b_i = flag ^ 1;
      }
      swap(s.at(a_i).at(a-1), s.at(b_i).at(b-1));
    } else {
      flag ^= 1;
    }
  }
  if(flag == 1)
    cout << s.at(1) + s.at(0) << endl;
  else
    cout << s.at(0) + s.at(1) << endl;

  return 0;
}
