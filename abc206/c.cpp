#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n ;
  vector<int> a(n);
  map<int,int> mp;
  long long ans = 0;
  
  for(int i=0; i<n; i++){
    cin >> a.at(i);
    mp[a.at(i)] += 1;
  }

  int n_i;
  for(int i=0; i<n; i++){
    n_i = n-i;
    mp.at(a.at(i)) -= 1;
    ans += n_i-1 - mp.at(a.at(i));
  }
    
  cout << ans << endl;
  
  return 0;
}
