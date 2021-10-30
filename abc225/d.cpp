#include<bits/stdc++.h>		

using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<int> front(N+1,0), back(N+1,0);
  deque<int> ans;
  for(int i=0; i<Q; i++){
    int query, x, y;    
    cin >> query;  
    if(query == 1){
      cin >> x >> y;
      back[x] = y;
      front[y] = x;
    }    
    if(query == 2){
      cin >> x >> y;
      back[x] = 0;
      front[y] = 0;      
    }
    if(query == 3){
      cin >> x;
      ans.push_back(x);
      while(true){
	if(front[x] == 0){
	  break;
	}
	x = front[x];
	ans.push_front(x);
      }
      x = ans.back();
      while(true){
	if(back[x] == 0){
	  break;
	}
	x = back[x];
	ans.push_back(x);
      }
      cout << ans.size() << " ";
      for(auto a: ans){
	cout << a << " ";
      }
      cout << '\n';
      ans.clear();
    }
  }  
  return 0;
}
