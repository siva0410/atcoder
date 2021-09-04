#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define SIZE 100005
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> A(n), prime;
  vector<bool> ng(SIZE, true);	 
  for(int i=0; i<n; i++){
    cin >> A.at(i);
  }

  for(auto a: A){
    for(int i=2; i*i<=a; i++){
      if(a%i != 0) continue;
      while(a%i == 0){
	a = a/i;
      }
      prime.push_back(i);
    }
    if(a!=1) prime.push_back(a);
  }
  
  for(auto& p: prime){
    if(ng.at(p)){
      for(int i=p; i<SIZE; i+=p){
	ng.at(i) = false;
      }
    }
  }
  vector<int> ans;
  for(int i=1; i<=m; i++){
    if(ng.at(i)) ans.push_back(i);
  }
  
  cout << ans.size() << '\n';
  for(auto& a: ans){
    cout << a << '\n';
  }
  
  return 0;
}
