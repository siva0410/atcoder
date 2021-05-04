#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int,int>> A(N);
  // int tempfirst, tempsecond;
  for(int i=0; i<N; i++){
    // cin >> tempfirst >> tempsecond;
    cin >> A.at(i).second >> A.at(i).first;
    // A.at(i) = make_pair(tempsecond, tempfirst); 
  }

  sort(A.begin(), A.end());
  
  for(int i=0; i<N; i++){
    cout << A.at(i).second << " " << A.at(i).first << endl;
  }
  
  return 0;
}
