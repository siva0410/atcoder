#include <bits/stdc++.h>

using namespace std;

int main(){
  int l, q;
  cin >> l >> q;
  set<int> st;
  vector<int> c(q), x(q);
  for(int i=0; i<q; i++){
    cin >> c.at(i) >> x.at(i);
  }
  st.insert(0);
  st.insert(l);
  for(int i=0; i<q; i++){  
    if(c.at(i) == 1){
      st.insert(x.at(i));
    }
    if(c.at(i) == 2){
      auto itr = st.lower_bound(x.at(i));
      cout << *itr - *prev(itr) << '\n';
    }
  }
  
  return 0;
}
