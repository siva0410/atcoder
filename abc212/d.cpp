#include <bits/stdc++.h>

using namespace std;

int main(){
  int q;
  cin >> q;
  vector<long long> ans;
  priority_queue<long long, vector<long long>, greater<long long>> que;
  long long add = 0;

  for(int i=0; i<q; i++){
    int p, x;
    cin >> p;
    if(p == 3){
      ans.push_back(que.top()+add);
      que.pop();
    } else{
      cin >> x;
      if(p == 1){
	que.push(x-add);
      }
      if(p == 2){
	add += x;
      }
    }
  }
  
  for(auto a: ans){
    cout << a << '\n';
  }
	  
      
  return 0;
}
