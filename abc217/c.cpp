#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int p;
  vector<int> ans(n);
  for(int i=1; i<n+1; i++){
    cin >> p;
    ans.at(p-1) = i;
  }
  for(int i=0; i<n; i++){  
    cout << ans.at(i) << " ";
  }
  cout << endl;
  
  return 0;
}
