#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for(int i=0; i<n; i++){
    cin >> x.at(i) >> y.at(i);
  }
  
  string s;
  cin >> s;

  map<int,int> mp;
  bool collision = false;
  for(int i=0; i<n; i++){
    if(s.at(i) == 'L'){
      mp[y.at(i)] = max(x.at(i), mp[y.at(i)]);
    }
  }
  for(int i=0; i<n; i++){
    if(s.at(i) == 'R'){
      if(x.at(i) < mp[y.at(i)]){
	collision = true;
      }
    }
  }

  if(collision){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
