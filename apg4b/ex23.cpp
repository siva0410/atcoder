#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; i++){
    cin >> A.at(i);
  }

  unordered_map<int, int> A_map;
  for(auto a: A){
    if(!A_map.count(a)){
      A_map.insert(make_pair(a,1));
    } else {
      A_map.at(a) += 1;
    }
  }
  
  int max_count = -1;
  int max_num = -1;
  
  for(auto a_map: A_map){
    if(max_count < a_map.second){
      max_count = a_map.second;
      max_num = a_map.first;
    }
  }
  cout << max_num << " " << max_count << endl;
    
  return 0;
}
