#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<queue<int>> A(m);
  for(int i=0; i<m; i++){
    int k;
    cin >> k;
    for(int j=0; j<k; j++){
      int tmp;
      cin >> tmp;
      tmp--;
      A.at(i).push(tmp);
    }
  }

  queue<int> que;
  map<int, int> mp;
  
  for(int i=0; i<m; i++){
    int Ai = A.at(i).front();
      if(mp.count(Ai)){
	que.push(mp[Ai]);
	que.push(i);
      } else{
	mp[Ai] = i;
      }      
  }
      
  while(!que.empty()){
    int a, b;
    a = que.front();
    que.pop();
    b = que.front();
    que.pop();

    A.at(a).pop();
    A.at(b).pop();

    if(!A.at(a).empty()){
      auto Aa = A.at(a).front();
      if(mp.count(Aa)){
	que.push(mp[Aa]);
	que.push(a);
      } else{
	mp[Aa] = a;
      }      
    }
  
    if(!A.at(b).empty()){
      auto Ab = A.at(b).front();
      if(mp.count(Ab)){
	que.push(mp[Ab]);
	que.push(b);
      } else{
	mp[Ab] = b;
      }
    }
  }
  
  bool ok=true;
  for(auto ans: A){
    if(!ans.empty())
      ok=false;
  }
  if(ok)
    cout << "Yes" << '\n';
  else
    cout << "No" << '\n';
  return 0;
}
    
  
