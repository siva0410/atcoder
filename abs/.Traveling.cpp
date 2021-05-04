#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> T(N), X(N), Y(N);
  for(int i=0; i<N; i++){
    cin >> T.at(i) >> X.at(i) >> Y.at(i);
  }

  int x=0, y=0;
  int distance=0;
  for(int i=0; i<N; i++){
    distance = abs(X.at(i)-x) + abs(Y.at(i)-y);
    x = X.at(i);
    y = Y.at(i);
    if((T.at(i)-distance)%2 == 1){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
      
