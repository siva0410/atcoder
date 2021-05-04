#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  vector<vector<char>> map(N, vector<char>(N,'-'));
  for(int i=0; i<M; i++){
    cin >> A.at(i) >> B.at(i);
  } 

  for(int i=0; i < M; i++){
      map.at(A.at(i)-1).at(B.at(i)-1) = 'o';
      map.at(B.at(i)-1).at(A.at(i)-1) = 'x';
  }

  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      cout << map.at(i).at(j);
      if(j == N-1){
	cout << endl;
      } else {
	cout << " ";
      }
    }
  }
  return 0;
}
