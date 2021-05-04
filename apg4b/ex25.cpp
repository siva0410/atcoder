#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> A(20,0);
  
  for(int i=0; i<N; i++){
    cin >> A.at(i);
  }

  for(int tmp=0; tmp<(1<<20); tmp++){
    bitset<20> b(tmp);
    int sum = 0;
    for(int i=0; i<N; i++){
      if(b.test(i)){
	sum = sum + A.at(i);
      }
    }
    if(sum == K){
      cout << "YES" << endl;
      return 0;
    }  
  }
  cout << "NO" << endl;
  
  return 0;
}
