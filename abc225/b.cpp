#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  map<int, int> mp;
  for(int i=0; i<n-1; i++){
    int a, b;
    cin >> a >> b;
    mp[a] += 1;
    mp[b] += 1;
  }

  bool yes = false;
  for(auto p: mp){
    if(p.second == n-1)
      yes = true;
  }
  
  if(yes)
      cout << "Yes" << '\n';
    else
      cout << "No" << '\n';
  
  return 0;
}
