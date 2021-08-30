#include <bits/stdc++.h>

using namespace std;

int main(){
  int  h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n), b(n);
  map<int,int> a_mp, b_mp;
  for(int i=0; i<n; i++){
    cin >> a.at(i) >> b.at(i);
    a_mp[a.at(i)] = 0;
    b_mp[b.at(i)] = 0;      
  }

  int tmp=1;
  for(auto& mp: a_mp){
    mp.second = tmp;
    tmp++;
  }

  tmp = 1;
  for(auto& mp: b_mp){
    mp.second = tmp;
    tmp++;
  }

  for(int i=0; i<n; i++){
    cout << a_mp[a.at(i)] << " " << b_mp[b.at(i)] << endl;    
  }

  return 0;
}
