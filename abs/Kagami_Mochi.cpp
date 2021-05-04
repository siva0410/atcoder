#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<int> D;
  int d;
  for(int i=0; i<N; i++){
    cin >> d;
    D.insert(d);
  }
  cout << D.size() << endl;
  return 0;
}
