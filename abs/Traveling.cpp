#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> T(N), X(N), Y(N);
  for(int i=0; i<N; i++){
    cin >> T.at(i) >> X.at(i) >> Y.at(i);
  }

  int x=0, y=0, t=0;
  int distance=0;
  for(int i=0; i<N; i++){
    distance = abs(X.at(i)-x) + abs(Y.at(i)-y);
    if(((T.at(i)-t)-distance) < 0 || ((T.at(i)-t)-distance)%2 == 1){
      cout << "No" << endl;
      return 0;
    }
    x = X.at(i);
    y = Y.at(i);
    t = T.at(i);
  }
  cout << "Yes" << endl;
  return 0;
}
      
