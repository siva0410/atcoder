#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  int Q;
  cin >> Q;

  map<int, int> s;
  set<int> st;
  for(int i=0; i<Q; i++){
    int q, x, c;
    cin >> q;
    if(q == 1){
      cin >> x;
      if(s[x] == 0){
	st.insert(x);
      }      
      s[x]++;
    }
    if(q == 2){
      cin >> x >> c;
      if(s[x] < c){
	s[x] = 0;
      } else{
	s[x] -= c;
      }
      if(s[x] == 0){
	st.erase(x);
      }
    }
    if(q == 3){
      cout << *st.rbegin() - *st.begin() << "\n";
    }
  }
  
  return 0;
}
