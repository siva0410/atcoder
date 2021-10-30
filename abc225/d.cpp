#include<bits/stdc++.h>

using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<deque<int>> deq_v;
  map<int, int> mp;
  int que_num = 1;
  for(int i=0; i<Q; i++){
    deque<int> tmp;
    int query, x, y;    
    cin >> query;
    if(query != 3){
      cin >> x >> y;
    } else {
      cin >> x;
    }
    if(query == 1){
      if(mp[x] != 0){
	deq_v.at(mp[x]-1).push_back(x);
	mp[y] = mp[x];
      } else if(mp[y] != 0){
	deq_v.at(mp[y]-1).push_front(y);
	mp[x] = mp[y];
      } else {
	tmp.push_back(x);
	tmp.push_back(y);
	deq_v.push_back(tmp);
	mp[x] = que_num;
	mp[y] = que_num;
	que_num++;
      }
    }    
    if(query == 2){
      while(true){
	int a = deq_v.at(mp[x]-1).front();
	deq_v.at(mp[x]-1).pop_front();
	tmp.push_back(a);
	if(a == x){
	  deq_v.push_back(tmp);
	  mp[x] = que_num++;
	  break;
	}
      }
    }
    if(query == 3){
      for(auto a: deq_v.at(mp[x]-1)){
	cout << a << " ";
      }
      cout << '\n';
    }
  }  
  return 0;
}
