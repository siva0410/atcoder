#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> s(n), t(n);
  for(int i=0; i<n; i++){
    cin >> s.at(i);
  }
  for(int i=0; i<n; i++){
    cin >> t.at(i);
  }

  int now = t.at(0);
  vector<int> time(n);
  for(int i=0; i<n; i++){
    if(t.at(i) < now)
      time.at(i) = t.at(i);
    else time.at(i) = now;
    // time.at(i) = min(time.at(i), now); 
    now = time.at(i) + s.at(i);
  }
  
  for(int i=0; i<n; i++){
    time.at(i) = min(time.at(i), now);
    now = time.at(i) + s.at(i);
  }
  
  for(int i=0; i<n; i++){
    cout << time.at(i) << endl;
  } 
    
  return 0;
}
  
